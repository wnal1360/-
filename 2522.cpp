#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a = n-1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << '\n';
	}
	for (int i = 1; i <= n-1; i++) {
		
		for (int j = 1; j <=n - a; j++) {
			cout << " ";
		}
		for (int k = 1; k <= a; k++) {
			cout << "*";
		}
		a--;
		cout << '\n';
	}
}