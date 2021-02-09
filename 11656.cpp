#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	string str;
	cin >> str;
	vector<string>v;
	for (int i = 0; i < str.length(); i++) {
		string cp = str.substr(i,str.length());
		v.push_back(cp);
	}

	sort(v.begin(),v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
	return 0;
}