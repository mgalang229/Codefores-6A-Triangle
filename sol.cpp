#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[4];
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	bool triangle = false;
	bool segment = false;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				if (i != j && j != k && i != k) {
					if (a[i] + a[j] > a[k] && a[i] + a[k] > a[j] && a[j] + a[k] > a[i]) {
						// to form a non-degenerate triangle:
						// a + b > c
						// a + c > b
						// b + c > a
						triangle = true;
					} else if (a[i] + a[j] == a[k]) {
						// to form a degenerate triangle:
						// a + b <= c
						segment = true;
					}
				}
			}
		}
	}
	if (triangle) {
		cout << "TRIANGLE";
	} else if (segment) {
		cout << "SEGMENT";
	} else {
		cout << "IMPOSSIBLE";
	}
	cout << '\n';
	return 0;
}
