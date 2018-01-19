std::stack<int> sortedStack;

void sortStackToMax(std::stack<int> stack){
	std::stack<int> tempStack;
	int currentMin;
	while(!stack.empty()){//do main cycle while all elements from first stack will not go to result stack
		currentMin = stack.top();
		while(!stack.empty()){//find min in first stack
			stack.pop();
			if(stack.top() < currentMin) 
			{
				currentMin = stack.top();				
			}
			tempStack.push(stack.top());//push first stack to temp
		}
		sortedStack.push(currentMin);//push min element from stack to result stack
		while(!tempStack.empty()){//push elements from temp stack to first stack
			if(tempStack.top() != currentMin){//if current element is minimal don't push it back to first stack
				stack.push(tempStack.top());				
			}
			tempStack.pop();
		}
	}
}