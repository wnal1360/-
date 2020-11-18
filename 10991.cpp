#include <iostream>
using namespace std;
int main() {
	int n,b,a ;
	cin >> n;
	a = b = n;
	for (int i = 1; i <= n; i++){
		for (int j = a - 1; j >= 1; j--) {
			cout << " ";
		}
		for (int k = 1; k < i+1; k++) {
			if (n == 1) cout << "*";
			else if (k == b + 1) cout << "*";
			else cout << "* ";
		}
		a--;
		b++;
		if(i!=n)cout << '\n';		
	}
}