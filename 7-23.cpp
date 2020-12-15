#include <iostream>
using namespace std;
bool isEqual(const int list1[], const int list2[], int size);

int main() {
	const int s = 20;
	int arr[s];
	int array[s];
	cout << "리스트 1번의 숫자를 입력하세요 : ";
	int n1;
	cin >> n1;
	for (int i = 0; i < n1; i++) {
		int num;
		cin >> num;
		arr[i] = num;
	}
	cout << "리스트 2번의 숫자를 입력하세요 : ";
	int n2;
	cin >> n2;
	for (int i = 0; i < n2; i++) {
		int num;
		cin >> num;
		array[i] = num;
	}
	if (n1 != n2) cout << "두 리스트는 동일하지 않습니다." << '\n';
	else {
		if (isEqual(arr, array, sizeof(arr)))cout << "두 리스트는 동일합니다." << '\n';
		else cout << "두 리스트는 동일하지 않습니다." << '\n';
	}
	
}
bool isEqual(const int list1[], const int list2[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			if (list1[i] != list2[j]) return false;
			else return true;
		}
	}
}