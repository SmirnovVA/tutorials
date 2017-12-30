class MyStack : public std::stack<int>{
	private:
		int currentMin; // index of current minimal element
		int * allMin;	// massive of all minimal elements
	public:
		explicit MyStack(){
			currentMin = 0;
			allMin = new int;
		}
		virtual ~MyStack(){
			delete allMin;
		}
		void push(int n);
		int pop();
		int minInStack();
};

void MyStack::push(int n){
	super.push(n);
	if(n < min || currentMin == 0) {
		if(currentMin == 0){
			currentMin++;
			allMin = n;	
		}
		else{
			currentMin++;
			int temp = new int(currentMin - 1);
			for(int i = 0; i < currentMin - 1; i++){
				temp[i] = allMin[i];
			}
			delete allMin;
			allMin = new int(currentMin);
			for(int i = 0; i < currentMin - 1; i++){
				allMin[i] = temp[i];
			}
			allMin[currentMin - 1] = n;
			delete temp;
		}
	}
}

int MyStack::pop(){
	int n = super.pop();
	if(n == allMin[currentMin - 1]){
		currentMin--;
		if(currentMin != 0){
			int temp = new int(currentMin);
			for(int i = 0; i < currentMin; i++){
				temp[i] = allMin[i];
			}		
			delete allMin;
			allMin = new int(currentMin);
			for(int i = 0; i < currentMin; i++){
				allMin[i] = temp[i];
			}
			delete temp;			
		}
	}
	return n;
}

int minInStack(){
	if(currentMin > 0){
		return allMin[currentMin - 1];
	}
}