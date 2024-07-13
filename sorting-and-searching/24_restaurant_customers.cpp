#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<pair<long, int>> a(n), l(n), t(n * 2);
	for (int i = 0; i < n; i++) {
		cin >> a[i].first;
		a[i].second = 1;
		cin >> l[i].first;
		l[i].second = -1;
	}
	merge(a.begin(), a.end(), l.begin(), l.end(), t.begin());
	sort(t.begin(), t.end());
	int max = 0, tmp = 0;
	for (auto x : t) {
		tmp += x.second;
		if (tmp > max)
			max = tmp;
	}
	cout << max << '\n';
}
