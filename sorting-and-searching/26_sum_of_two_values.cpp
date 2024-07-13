#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n;
	long x;
	cin >> n;
	cin >> x;
	vector<pair<long, int>> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].first;
		a[i].second = i + 1;
	}
	sort(a.begin(), a.end());

	for (int i = 0; i < n; i++) {
		pair<long, int> p = {x - a[i].first, 0};
		auto y = lower_bound(a.begin(), a.end(), p);
		if (y != a.end() && y->first == (x - a[i].first) &&
			y->second != a[i].second) {
			cout << a[i].second << ' ' << y->second << '\n';
			return 0;
		}
	}

	cout << "IMPOSSIBLE\n";
}
