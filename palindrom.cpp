bool isPalindrom(std::string inString){
	std::string str1;
	std::string str2;
	std::set<char> str;
	int len = inString.length();
	for(int i = 0; i < len; i++){
		if(inString[i] != ' ') str1.push_back(std::toupper(inString[i]));
		if(inString[len - i - 1] != ' ') str2.push_back(std::toupper(inString[len - i - 1]));
	}
	return (str1.compare(str2) == 0);
}
