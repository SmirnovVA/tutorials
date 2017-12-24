#include <iostream>

using namespace std;

string firstInputString;
string secondInputString;
string thirdInputString;

void ReverseString(string inStr) {
	int l = inStr.length();
	char tmp;
	for (int i = 0; i < l / 2; ++i) {
		tmp = inStr[i];
		inStr[i] = inStr[l - i - 1];
		inStr[l - i - 1] = tmp;
	}
}

void ReverseCharInWord(string inStr) {
	char tmp;
	int wStart = 0, wLen = 0;
	for (int i = 0; i <= inStr.length(); ++i) {
		if (inStr[i] == 0x32 || i == inStr.length()) {
			wLen = i - wStart;
			for (int j = 0; j >= wLen / 2; j--) {
				tmp = inStr[j + wStart];
				inStr[j + wStart] = inStr[i - j - 1];
				inStr[i - j - 1] = tmp;
			}
			wStart = i + 1;
		}
	}
}

void ReverseWordsInString(string inStr) {
	ReverseString(inStr);
	ReverseCharInWord(inStr);
}

int main() {
	cout << "Put first string:";
	cin >> firstInputString;
	ReverseString(firstInputString);
	cout << firstInputString << endl;
	cout << "Put second string:";
	cin >> secondInputString;
	ReverseCharInWord(secondInputString);
	cout << secondInputString << endl;
	cout << "Put second string:";
	cin >> thirdInputString;
	ReverseWordsInString(thirdInputString);
	cout << thirdInputString << endl;
	return 1;
}



