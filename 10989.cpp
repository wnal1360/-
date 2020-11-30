#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>v;
int main() {
	int n = 0;
	scanf("%d", &n);
	v.resize(10001);
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		v[a]++;
	}
	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < v[i]; j++) {
			printf("%d\n", i);
		}
	}
}