#include <iostream>
#include <string>
using namespace std;

char rot(char str);

int main() {
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		cout << rot(str[i]);
	}
	return 0;
}
char rot(char str) {
	if (str >= 65 && str <= 90) {
		if (str + 13 > 90) return str - 13;
		else return str + 13;
	}
	else if (str >= 97 && str <= 122) {
		if (str + 13 > 122) return str - 13;
		else return str + 13;
	}
	else return str;
}