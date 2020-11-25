#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int dp[1000001];
int recusion(int idx);
int main() {
	int n = 0;
	cin >> n;
	memset(dp, -1, sizeof(dp));
	cout << recusion(n) << '\n';
	return 0;
}
int recusion(int idx) {
	if (idx == 1) return 0;
	if (dp[idx] != -1)return dp[idx];
	int result = recusion(idx - 1) + 1;
	if (idx % 3 == 0) result = min(result, recusion(idx/3) + 1);
	if (idx % 2 == 0) result = min(result, recusion(idx / 2) + 1);
	return dp[idx] = result;
}