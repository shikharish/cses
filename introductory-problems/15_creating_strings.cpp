#include <iostream>
#include <set>
using namespace std;

set<string> s;

void permute(string &a, int l, int r) {
	if (l == r) {
		s.insert(a);
		return;
	}

	for (int i = l; i <= r; i++) {
		swap(a[l], a[i]);
		permute(a, l + 1, r);
		swap(a[l], a[i]);
	}
}

int main() {
	ios::sync_with_stdio(false);
	string a;
	cin >> a;
	permute(a, 0, a.length() - 1);
	cout << s.size() << '\n';
	for (string x : s) {
		cout << x << "\n";
	}
}
