#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
struct score {
	string name;
	int korean;
	int english;
	int math;
};
bool tmp(score a, score b) {
	if (a.korean != b.korean) return a.korean > b.korean;
	else if (a.english != b.english) return a.english < b.english;
	else if (a.math != b.math) return a.math > b.math;
	else {
		string c = a.name, d = b.name;
		return c < d;
	}
}
int main() {
	int n = 0;
	cin >> n;
	vector<score>v;
	v.resize(n + 1);
	for (int i = 0; i < n; i++) {
		cin >> v[i].name >> v[i].korean >> v[i].english >> v[i].math;
	}
	sort(v.begin(), v.end(), tmp);
	for (int i = 0; i < n; i++) {
		cout << v[i].name<<'\n';
	}
	
}