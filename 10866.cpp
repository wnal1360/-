#include <iostream>
#include <deque>
#include <string>
using namespace std;
deque<int>dq[100001];

void que(string str) {
	if (str == "push_front") {
		int a;
		cin >> a;
		dq->push_front(a);
	}
	else if (str == "push_back") {
		int a;
		cin >> a;
		dq->push_back(a);
	}
	else if (str == "pop_front") {
		if (dq->empty()) {
			cout << -1 << '\n';
		}
		else {
			cout << dq->front() << '\n';
			dq->pop_front();
		}
	}
	else if (str == "pop_back") {
		if (dq->empty()) {
			cout << -1 << '\n';
		}
		else {
			cout << dq->back() << '\n';
			dq->pop_back();
		}
	}
	else if (str == "size") {
		cout << dq->size() << '\n';
	}
	else if (str == "empty") {
		if (dq->empty()) {
			cout << 1 << '\n';
		}
		else cout << 0 << '\n';
	}
	else if (str == "front") {
		if (dq->empty()) {
			cout << -1 << '\n';
		}
		else cout << dq->front() << "\n";
	}
	else {
		if (dq->empty()) {
			cout << -1 << '\n';
		}
		else cout << dq->back() << '\n';
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		que(str);
	}
	return 0;
}