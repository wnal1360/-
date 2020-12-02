#include <iostream>
#include<algorithm>
#include<vector>
typedef long long ll;
using namespace std;
vector<ll>v;
int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	ll max = v[0];
	int cnt = 1;
	int nowcnt = 0;
	for (int i = 1; i < v.size()-1; i++) {
		if (v[i] == v[i + 1]) {
			cnt++;
			if (nowcnt < cnt) {
				nowcnt = cnt;
				max = v[i];
				continue;
			}
		}
		else {	
			cnt = 0;
		}
	}
	cout << max << '\n';
}
