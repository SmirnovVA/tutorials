bool isPalindrom(std::string inString){
	std::string str1;
	std::string str2;
	for(int i = 0; i < inString.length(); i++){
		if(inString[i] != ' ') str1.push_back(inString[i]);
		if(inString[inString.length() - i - 1] != ' ') str2.push_back(inString[inString.length() - i - 1]);
	}
	return (str1.compare(str2) == 0);
}
