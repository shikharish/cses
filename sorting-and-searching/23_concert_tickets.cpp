#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n;
	cin >> m;
	multiset<int> h;
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		h.insert(tmp);
	}
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		auto j = h.lower_bound(tmp);
		if (*j == tmp) {
			cout << *j << '\n';
			h.erase(j);
		} else if (*j != tmp && j != h.begin()) {
			j--;
			cout << *j << '\n';
			h.erase(j);
		} else {
			cout << "-1\n";
		}
	}
}
