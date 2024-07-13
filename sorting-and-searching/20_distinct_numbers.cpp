#include <iostream>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	long n;
	cin >> n;
	map<int, int> m;
	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		m[x]++;
	}
	cout << m.size() << '\n';
}
