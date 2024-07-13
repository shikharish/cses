#include <iostream>
using namespace std;

int n = 0;

void gray(int n, int k, string &s) {
	if (k < 0)
		return;
	gray(n, k - 1, s);
	s[n - k - 1] = s[n - k - 1] == '0' ? '1' : '0';
	cout << s << '\n';
	gray(n, k - 1, s);
}

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	string s(n, '0');
	cout << s << '\n';
	gray(n, n - 1, s);
}
