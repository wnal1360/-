#include <iostream>
#include<string>
using namespace std;

int first = 0, last = 0;

int main() {
	int n;
	cin >> n;
	int que[10001];
	
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		int size = last - first;
		if (str == "push") {
			int num;
			cin >> num;
			que[last] = num;
			last++;
		}
		else if (str == "pop") {
			if (size == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << que[first] << '\n';
				first++;
			}
		}
		else if (str == "size") {
			cout << size << '\n';
		}
		else if (str == "empty") {
			if (size == 0) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (str == "front") {
			if (size == 0) cout << -1 << '\n';
			else cout << que[first] << '\n';
		}
		else if (str == "back") {
			if (size == 0) cout << -1 << '\n';
			else cout << que[last - 1] << '\n';
		}
	}
}