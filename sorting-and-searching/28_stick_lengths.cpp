#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> lengths(n);
	for (int i = 0; i < n; i++) {
		cin >> lengths[i];
	}
	sort(lengths.begin(), lengths.end());
	int median = lengths[n / 2];
	long cost = 0;
	for (int i = 0; i < n; i++) {
		cost += abs(median - lengths[i]);
	}
	cout << cost << '\n';
}
