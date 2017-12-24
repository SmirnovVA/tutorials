#include <iostream>

string firstInputString;
string secondInputString;
string thirdInputString;

void ReverseString(string inStr){
	int l = strlen(inStr);
	char tmp;
	for(int i = 0; i < l/2; ++i){
		tmp = inStr[i];
		inStr[i] = inStr[l - i - 1];
		inStr[l - i - 1] = tmp;
	}
}

void ReverseCharInWord(string inStr){
	int l = strlen(inStr);
	char tmp;
	int wStart = 0, wEnd = 0;
	for(int i = 0; i <= l; ++i){
		if(inStr[i] == " " || i == l){
			wEnd = i - 1;
			for(int j = wStart; j <= wEnd; ++j){
				tmp = inStr[j];
				inStr[j] = inStr[wEnd - j]
				inStr[wEnd - j] = tmp;
			}
			wStart = i + 1;
		}
	}
}

void ReverseWordsInString(string inStr){
	int l = strlen(inStr);
	string * tmp;
	int wStart = 0, wEnd = 0, wNum = 0;
	for(int i = 0; i <= l; ++i){
		if(inStr[i] == " " || i == l){
			wEnd = i - 1;
			for(int j = wStart; j <= wEnd; ++j){
				tmp[wNum][j - wStart] = inStr[j];
			}
			wStart = i + 1;
			wNum = Wnum + 1;
		}
	}
	wStart = 0;
	for(i = 0; i < wNum; ++i){
		l = strlen(tmp[i]);
		for(j = 0; j < l; ++j){
			inStr[wStart + j] = tmp[i][j];
		}
		inStr[wStart + l] = " ";
		wStart = l + 1;
	}
}

int main(){
	std.cout << "Put first string:";
	std.cin >> firstInputString;
	ReverseString(firstInputString);
	std.cout << firstInputString;
	std.cout << "Put second string:";
	std.cin >> secondInputString;
	ReverseCharInWord(secondInputString);	
	std.cout << secondInputString;
	std.cout << "Put second string:";
	std.cin >> thirdInputString;
	ReverseWordsInString(thirdInputString);	
	std.cout << thirdInputString;
	return 1;
}

