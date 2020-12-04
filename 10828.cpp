#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
stack<int>s;
int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (str == "pop") {
			if (s.empty()) cout << -1 << '\n';
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (str == "size") {
			cout << s.size() << '\n';
		}
		else if (str == "empty") {
			if (s.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (str == "top") {
			if (s.empty()) cout << -1 << '\n';
			else cout << s.top()<<'\n';
		}
	}
}