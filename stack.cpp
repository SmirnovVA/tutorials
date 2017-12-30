class MyStack : public std::stack<int>{
	private:
		int min;
	public:
		explicit MyStack(){
			min = 0;
		}
		virtual ~MyStack(){
		}
		void push(int n);
		int pop();
		int minInStack();
};

void MyStack::push(int n){
	super.push(n)
	if(n < min) min = n;
}

int MyStack::pop(){
	int n = super.pop();
	return n;
}

int minInStack(){
	return min;
}