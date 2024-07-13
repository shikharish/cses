#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	long n;
	cin >> n;
	long sum = n * (n + 1) / 2;

	if (sum % 2 != 0) {
		cout << "NO\n";
		return 0;
	}

	vector<int> set1, set2;
	long tmp = sum / 2;
	for (int i = n; i >= 1; i--) {
		if (i <= tmp) {
			set1.push_back(i);
			tmp -= i;
		} else {
			set2.push_back(i);
		}
	}

	cout << "YES\n";
	cout << set1.size() << '\n';
	for (int i : set1) {
		cout << i << " ";
	}
	cout << '\n';
	cout << set2.size() << '\n';
	for (int i : set2) {
		cout << i << " ";
	}
	cout << '\n';
}
