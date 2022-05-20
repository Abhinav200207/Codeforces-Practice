#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	a.resize(unique(a.begin(), a.end()) - a.begin());
	if (a.size() > 3) {
		cout << -1 << endl;
	} else {
		if (a.size() == 1) {
			cout << 0 << endl;
		} else if (a.size() == 2) {
			if ((a[1] - a[0]) % 2 == 0) {
				cout << (a[1] - a[0]) / 2 << endl;
			} else {
				cout << a[1] - a[0] << endl;
			}
		} else {
			if (a[1] - a[0] != a[2] - a[1]) {
				cout << -1 << endl;
			} else {
				cout << a[1] - a[0] << endl;
			}
		}
	}
	
	return 0;
}