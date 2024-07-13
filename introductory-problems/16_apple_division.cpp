#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	long n;
	cin >> n;
	vector<int> weights;
	int w;
	for (int i = 0; i < n; i++) {
		cin >> w;
		weights.push_back(w);
	}
	long sum1, sum2;
	long min_diff = INFINITY;
	for (int i = 0; i < (1 << n); i++) {
		sum1 = sum2 = 0;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j))
				sum1 += weights[j];
			else
				sum2 += weights[j];
		}
		min_diff = min(min_diff, abs(sum2 - sum1));
	}
	cout << min_diff << '\n';
}
