#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v;
int main() {
	int n, k;
	scanf("%d%d", &n ,&k);
	//cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int a = 0;
		//cin >> a;
		scanf("%d", &a);
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	printf("%d\n", v[k - 1]);
	//cout << v[k-1] << '\n';
}	
