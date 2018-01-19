std::stack<int> sortStackToMax(std::stack<int> stack){
	std::stack<int> tempStack;
	std::stack<int> sortedStack;
	int currentMin;
	while(!stack.empty()){//do main cycle while all elements from  stack will not go to result stack
		currentMin = stack.top();
		while(!stack.empty()){//find min in  stack
			if(stack.top() < currentMin) currentMin = stack.top();// set new min in stack		
			tempStack.push(stack.top());//push stack top to temp
			stack.pop();
		}
		while(!tempStack.empty()){//push elements from temp stack to stack
			if(tempStack.top() == currentMin){//if temp stack equal to currentMin -> push it to sorted stack
				sortedStack.push(tempStack.top());
				tempStack.pop();
			}
			stack.push(tempStack.top());//push other elements to stack	
			tempStack.pop();
		}
	}
	return sortedStack;
}