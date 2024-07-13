#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<long> x(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	long sum = -1e10, max_sum = -1e10;
	for (int i = 0; i < n; i++) {
		sum = max(x[i], sum + x[i]);
		max_sum = max(max_sum, sum);
	}
	cout << max_sum << '\n';
}
