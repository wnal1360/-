#include <iostream>
#include<string>
#include <cstring>
using namespace std;
int a[4];
void cnt(char str);

int main() {
	
	while (true) {
		string str;
		getline(cin, str);
		if (cin.eof() == true) break;
		for (int i = 0; i < str.size(); i++) {
			cnt(str[i]);
		}
		for (int i = 0; i < 4; i++) {
			cout << a[i]<< ' ';
		}
		cout << '\n';
		memset(a, 0, sizeof(a));
	}
	return 0;
}
void cnt(char str) {
	if (str >= 'a' && str <= 'z') a[0]++;
	else if (str >= 'A' && str <= 'Z') a[1]++;
	else if (str == ' ') a[3]++;
	else if(str >= '0' && str <= '9') a[2]++;
}