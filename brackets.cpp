bool isBracketsCorrect(std::string inString){
	std::stack<char> brackets;
	std::map<char,char> bracketTypes;
	std::map<char,char>::iterator it;
	bracketTypes['}']='{';
	bracketTypes[']']='[';
	bracketTypes[')']='(';
	for(int i = 0; i < inString.length(); i ++){
		it = bracketTypes.begin();
		while(it->second != inString.at(i)) it++;//search for value inString.at(i) in map 'bracketTypes'
		if(it != bracketTypes.end()) brackets.push(inString.at(i));//if value was found push inString.at(i) it to stack 'brackets'
		if(bracketTypes.count(inString.at(i)) && 
		   brackets.top() != bracketTypes.find(inString.at(i))->second) return false;//if map 'bracketTypes' contains element with key = inString.at(i) 
											     //&& stack 'brackets' top element != value of map element with key = inString.at(i) )
											     //-> sequence is incorrect
		else brackets.pop();							     // else pop top element from stack 'brackets'	
	}
	return brackets.empty();
}
