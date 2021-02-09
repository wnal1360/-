#include <iostream>
#include <string>
using namespace std;

int main() {
	string num[4];
	for (int i = 0; i < 4; i++) {
		cin >> num[i];
	}
	long long s1 = stoll(num[0] + num[1]);
	long long s2 = stoll(num[2] + num[3]);

	cout << s1 + s2 << '\n';

	return 0;
}