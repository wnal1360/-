#include <iostream>
#include <string>
using namespace std;
int countLetters(const char s[]);
int main() {
	cout << "문자를 입력하세요 : ";
	char cstr[100];
	cin.getline(cstr, 100, '\n');
	cout << cstr << " 의 글자수는 " << countLetters(cstr) << '\n';
}
int countLetters(const char s[]) {
	int size = strlen(s);
	int cnt = 0;
	for (int i = 0; i < size; i++) {
		if (s[i] >= 'A' and s[i] <= 'Z') cnt++;
		else if (s[i] >= 'a' and s[i] < 'z') cnt++;
		else continue;
	}
	return cnt;
}