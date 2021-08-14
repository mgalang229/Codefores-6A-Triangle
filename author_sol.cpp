#include <bits/stdc++.h>

using namespace std;

bool Triangle(int a, int b, int c) {
	return (a + b > c && a + c > b && b + c > a);
}

bool Segment(int a, int b, int c) {
	return (a + b == c || a + c == b || b + c == a);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	bool non_degenerate = false;
	bool degenerate = false;
	// check if a non-degenerate (normal) triangle can be formed
	non_degenerate = non_degenerate || (Triangle(a, b, c));
	non_degenerate = non_degenerate || (Triangle(a, b, d));
	non_degenerate = non_degenerate || (Triangle(a, c, d));
	non_degenerate = non_degenerate || (Triangle(b, c, d));
	// check if a degenerate triangle can be formed
	degenerate = degenerate || (Segment(a, b, c));
	degenerate = degenerate || (Segment(a, b, d));
	degenerate = degenerate || (Segment(a, c, d));
	degenerate = degenerate || (Segment(b, c, d));
	if (non_degenerate) {
		cout << "TRIANGLE";
	} else if (degenerate) {
		cout << "SEGMENT";
	} else {
		cout << "IMPOSSIBLE";
	}
	cout << '\n';
	return 0;
}
