#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	long n, m, k, n_app = 0;
	cin >> n;
	cin >> m;
	cin >> k;
	vector<long> a, b;
	long tmp;
	for (long i = 0; i < n; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}
	sort(a.begin(), a.end());
	for (long i = 0; i < m; i++) {
		cin >> tmp;
		b.push_back(tmp);
	}
	sort(b.begin(), b.end());

	auto y = b.begin();
	for (long x : a) {
		while (y != b.end()) {
			if (x - *y < -k)
				break;
			if (x - *y > k) {
				y++;
				continue;
			}
			n_app++;
			y++;
			break;
		}
	}

	cout << n_app << '\n';
}
