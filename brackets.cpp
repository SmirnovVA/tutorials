bool isBracketsCorrect(std::string inString){
	int curlyBracket = 0, curlyToRound, curlyToSquare;
	int roundBracket = 0, roundToCurly, roundToSquare;
	int squareBracket = 0, squareToCurly, squareToRound;
	for(int i = 0; i < inString.length(); i ++){
		if(std::string.at(i) == '{') curlyBracket++;
		if(std::string.at(i) == '[') squareBracket++;
		if(std::string.at(i) == '(') roundBracket++;
		if(std::string.at(i) == '}') curlyBracket--;
		if(std::string.at(i) == ']') squareBracket--;
		if(std::string.at(i) == ')') roundBracket--;
	}
	if(curlyBracket == roundBracket == squareBracket == 0) return true;
	else return false;
}