bool isBracketsCorrect(inString inString){
	std::stack<char> brackets;
	for(int i = 0; i < inString.length(); i ++){
		if(inString.at(i) == '{' || inString.at(i) == '[' || inString.at(i) == '(') brackets.push(inString.at(i));
		if((inString.at(i) == '}' && brackets.top() != '{') ||
		   (inString.at(i) == ']' && brackets.top() != '[') ||
		   (inString.at(i) == '(' && brackets.top() != ')')) return false
		else brackets.pop();
	}
	return brackets.empty();
}
