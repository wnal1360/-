#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int alp[26];
void alpcnt(char str);
int cnt = 0;
int main() {
	string str;
	cin >> str;
	memset(alp, -1, sizeof(alp));
	for (int i = 0; i < str.size(); i++) {
		alpcnt(str[i]);
		cnt++;
	}
	for (int i = 0; i < 26; i++) {
		cout << alp[i] << " ";
	}
	return 0;
}
void alpcnt(char str) {
	if (str == 97 && alp[0] == -1) alp[0] = cnt;
	else if (str == 98 && alp[1] == -1) alp[1] = cnt;
	else if (str == 99 && alp[2] == -1) alp[2] = cnt;
	else if (str == 100 && alp[3] == -1) alp[3] = cnt;
	else if (str == 101 && alp[4] == -1) alp[4] = cnt;
	else if (str == 102 && alp[5] == -1) alp[5] = cnt;
	else if (str == 103 && alp[6] == -1) alp[6] = cnt;
	else if (str == 104 && alp[7] == -1) alp[7] = cnt;
	else if (str == 105 && alp[8] == -1) alp[8] = cnt;
	else if (str == 106 && alp[9] == -1) alp[9] = cnt;
	else if (str == 107 && alp[10] == -1) alp[10] = cnt;
	else if (str == 108 && alp[11] == -1) alp[11] = cnt;
	else if (str == 109 && alp[12] == -1) alp[12] = cnt;
	else if (str == 110 && alp[13] == -1) alp[13] = cnt;
	else if (str == 111 && alp[14] == -1) alp[14] = cnt;
	else if (str == 112 && alp[15] == -1) alp[15] = cnt;
	else if (str == 113 && alp[16] == -1) alp[16] = cnt;
	else if (str == 114 && alp[17] == -1) alp[17] = cnt;
	else if (str == 115 && alp[18] == -1) alp[18] = cnt;
	else if (str == 116 && alp[19] == -1) alp[19] = cnt;
	else if (str == 117 && alp[20] == -1) alp[20] = cnt;
	else if (str == 118 && alp[21] == -1) alp[21] = cnt;
	else if (str == 119 && alp[22] == -1) alp[22] = cnt;
	else if (str == 120 && alp[23] == -1) alp[23] = cnt;
	else if (str == 121 && alp[24] == -1) alp[24] = cnt;
	else if (str == 122 && alp[25] == -1) alp[25] = cnt;
	else;

}