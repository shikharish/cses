#include <cmath>
#include <iostream>
using namespace std;

long digit(long k) {
	long tmp = k;
	long i = 0;
	long f = 9;
	while (tmp > f) {
		tmp -= f;
		i++;
		f = f * 10 / i * (i + 1);
	}
	long n = (long)pow(10, i) + (tmp - 1) / (i + 1);
	return (n / ((long)pow(10, i - (tmp - 1) % (i + 1)))) % 10;
}

int main() {
	ios::sync_with_stdio(false);
	long q;
	cin >> q;
	long k;
	for (long i = 0; i < q; i++) {
		cin >> k;
		cout << digit(k) << '\n';
	}
}
