#include <iostream>
#include <string>
using namespace std;
int alp[26];
void cnt(char str) {
	if (str == 97) alp[0]++;
	else if (str == 98) alp[1]++;
	else if (str == 99) alp[2]++;
	else if (str == 100) alp[3]++;
	else if (str == 101) alp[4]++;
	else if (str == 102) alp[5]++;
	else if (str == 103) alp[6]++;
	else if (str == 104) alp[7]++;
	else if (str == 105) alp[8]++;
	else if (str == 106) alp[9]++;
	else if (str == 107) alp[10]++;
	else if (str == 108) alp[11]++;
	else if (str == 109) alp[12]++;
	else if (str == 110) alp[13]++;
	else if (str == 111) alp[14]++;
	else if (str == 112) alp[15]++;
	else if (str == 113) alp[16]++;
	else if (str == 114) alp[17]++;
	else if (str == 115) alp[18]++;
	else if (str == 116) alp[19]++;
	else if (str == 117) alp[20]++;
	else if (str == 118) alp[21]++;
	else if (str == 119) alp[22]++;
	else if (str == 120) alp[23]++;
	else if (str == 121) alp[24]++;
	else if (str == 122) alp[25]++;
}
int main() {
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		cnt(str[i]);
	}
	for (int i = 0; i < 26; i++) {
		cout << alp[i] << " ";
	}
}