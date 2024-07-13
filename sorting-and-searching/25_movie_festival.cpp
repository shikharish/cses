#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n;
    cin >> n;
	vector<pair<long, int>> m(n);
	for (int i = 0; i < n; i++) {
		cin >> m[i].first;
		cin >> m[i].second;
	}
	sort(m.begin(), m.end());

	int count = 1;
	auto curr = m[0];
	for (auto x : m) {
		if (curr.second <= x.first) {
			curr = x;
			count++;
		}
		if (x.second < curr.second) {
			curr = x;
		}
	}

	cout << count << '\n';
}
