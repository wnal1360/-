﻿#include <iostream>
using namespace std;
int main() {
	int n, a;
	cin >> n;
	int b = 1;
	a = n - 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n-a; j++) {
			cout << "*";
		}
		for (int k = 1; k <= 2*a; k++) {
			cout << " ";
		}
		for (int l = 1; l <= n-a; l++) {
			cout << "*";
		}
		a--;
		cout << '\n';
	}
	for (int i = n - 1; i >= 1; i--) {
		for (int j = 1; j <= n -b ; j++) {
			cout << "*";
		}
		for (int k = 1; k <= 2 * b; k++) {
			cout << " ";
		}
		for (int l = 1; l <= n - b; l++) {
			cout << "*";
		}
		b++;
		cout << '\n';
	}
}