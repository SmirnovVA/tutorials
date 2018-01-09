bool isBracketsCorrect(srd::string inString){
	std::stack<char> brackets;
	for(int i = 0; i < inString.length(); i ++){
		if((inString.at(i) == '}' && brackets.top() != '{') ||
		   (inString.at(i) == ']' && brackets.top() != '[') ||
		   (inString.at(i) == ')' && brackets.top() != '(')) return false
		else{
			brackets.pop();
			continue;
		}
		brackets.push(inString.at(i))
	}
	return brackets.empty();
}
