#include <iostream>
using namespace std;
int main() {
	int n,a;
	cin >> n;
	a=n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n-a; j++) {
			cout << " ";
		}
		for (int k = 1; k <= a; k++) {
			cout << "*";
		}
		a--;
		cout << '\n';
	}
}