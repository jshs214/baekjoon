#include <bits/stdc++.h>
using namespace std;

int a[3][3] = { {1,2,3},
				{4,5,6},
				{7,8,9} };
int main() {
	int b[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			b[i][j] = a[3 - j - 1][i];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << b[i][j] << " ";
		}
		cout << '\n';
	}


}