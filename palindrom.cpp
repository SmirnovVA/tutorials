bool isPalindrom(std::string inString){
	std::string str1;
	std::string str2;
	for(int i = 0; i < inString.length(); i++){
		if(inString[i] != ' ') str1[i] = inString[i];
		if(inString[inString.length() - i - 1] != ' ') str2[i] = inString[inString.length() - i - 1];
	}
	return (str1.compare(str2) == 0);
}
