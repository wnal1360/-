#include <iostream>
using namespace std;
int main() {
	int n, a;
	cin >> n;
	int b = 1;
	a = n ;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - a; j++) {
			cout << " ";
		}
		for (int k = 1; k <= 2*a-1; k++) {
			cout << "*";
		}
		a--;
		cout << '\n';
	}
	for (int i = n - 1; i >= 1; i--) {
		for (int j = 1; j <= n - b-1; j++) {
			cout << " ";
		}
		for (int k = 1; k <= 2 * b+1; k++) {
			cout << "*";
		}
		b++;	
		if(i!=1)cout << '\n';
	}
}