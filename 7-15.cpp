#include<iostream>
using namespace std;
const int a = 100;
bool lck[a];
int main() {
	for (int i = 0; i < a; i++) {
		int sdt = 0;
		for (int j = 1; j <= a; j++) {
			if (j % (i + 1) == 0) {
				if (lck[j - 1]) lck[j - 1] = false;
				else lck[j - 1] = true;
			}
		}
	}
	for (int i = 0; i < a; i++) {
		if (lck[i]) cout << i + 1 << " ";
	}

}