bool isBracketsCorrect(inString inString){
	std::stack<char> brackets;
	for(int i = 0; i < inString.length(); i ++){
		if(inString.at(i) == '{' || inString.at(i) == '[' || inString.at(i) == '(') brackets.push(inString.at(i));
		if(inString.at(i) == '}' || inString.at(i) == ']' || inString.at(i) == ')') {
			if(brackets.empty() || 
			   (inString.at(i) == '}' && brackets.top() != '{') ||
			   (inString.at(i) == ']' && brackets.top() != '[') ||
			   (inString.at(i) == '(' && brackets.top() != ')')) return false
			brackets.pop();
		}
	}
	if(brackets.empty()) return true;
	else return false;
}
