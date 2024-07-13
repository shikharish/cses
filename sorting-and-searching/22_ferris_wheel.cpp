#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	long n, x, count = 0;
	cin >> n;
	cin >> x;
	long tmp;
	vector<long> p;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		p.push_back(tmp);
	}
	sort(p.begin(), p.end());

	long i = 0;
	long j = n - 1;
	while (i <= j) {
		if (p[i] + p[j] <= x) {
			count++;
			j--;
			i++;
			continue;
		} else {
			count++;
			j--;
		}
	}
	cout << count << '\n';
}
