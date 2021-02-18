#include <iostream>
#include<list>
#include<algorithm>
#include<string>
using namespace std;
list<char> v;
list<char>::iterator len = v.end();
void move(char ch);

int main() {
	string str;
	int n;
	cin >> str;
	cin >> n;
	for (int i = 0; i < str.length(); i++) {
		v.push_back(str[i]);
	}
	for (int i = 0; i < n; i++) {
		char a;
		cin >> a;
		move(a);
	}
	for (auto& List : v)
		cout << List;

	return 0;
}
void move(char ch) {
	if (ch == 'P') {
		char a;
		cin >> a;
		v.insert(len, a);
	}
	else if (ch == 'R' && len != v.end()) len++;
	else if (ch == 'L' && len != v.begin()) len--;
	else if (ch == 'B' && len != v.begin()) {
		v.erase(--len);
	}
}