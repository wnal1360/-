#include<iostream>
using namespace std;
int arr[10] = { -1 };
int cp[10];
int main() {
	int cnt = 0;
	cout << "Enter the numbers : ";
	for (int i = 0; i < 10; i++) {
		int n;
		cin >> n;
		if (n == arr[n]) continue;
		arr[n] = n;
		cp[cnt] = n;
		cnt++;
	}
	cout << "The distinct number are : ";
	for (int i = 0; i <cnt; i++) {
		cout << cp[i] << " ";
	}
	
	return 0;
}