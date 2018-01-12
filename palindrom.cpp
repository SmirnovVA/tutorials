bool isPalindrom(std::string inString){
	std::string str1;
	std::string str2;
	for(int i = 0; i < inString.length()/2; i++){
		if(inString[i] != ' ') str1[i] = inString[i];
		if(inString[inString.length() - i - 1] != ' ') str2[i] = inString[inString.length() - i - 1];
	}
	if(str1.compare(str2) == 0) return true;
	else return false;
}