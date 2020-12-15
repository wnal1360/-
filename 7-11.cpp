#include<iostream>
using namespace std;
double mean(const double x[], int size);
double deviation(const double x[], int size);
const int s = 10;
double arr[s];
int main() {	
	cout << "숫자를 입력하세요. : ";
	for (int i = 0; i < s; i++) {
		cin >> arr[i];
	}
	cout << " 평균 : " << mean(arr, s) << '\n';
	cout << "표준편차 : " << deviation(arr, s) << '\n';
}
double mean(const double x[], int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += x[i];
	}
	return sum / size;
}
double deviation(const double x[], int size) {
	double a = 0;
	double sum = 0;
	for (int i = 0; i < size; i++) {
		 a = sqrt(sum += pow(x[i] - mean(arr,s),2) / (size -1));
	}
	return a;
}