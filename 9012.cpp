#include <iostream>
#include <string>
#include<stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	bool vps = true;

	for (int i = 0; i < n; i++) {
		stack<char> s;
		string str;
		cin >> str;

		for (int k = 0; k < str.length(); k++) {
			if (str[k] == '(') s.push(str[k]);
			else {
				if (s.empty()) { 
					cout << "NO" << '\n';
					vps = false;
					break; 
				}
				else s.pop();
			}
		}
		if (vps) {
			if (s.empty()) cout << "YES" << '\n';
			else cout << "NO" << '\n';
		}
		vps = true;
	}
	return 0;
}