#include <iostream>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	map<int, int> x;
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		x[tmp] = i;
	}
	int count = 1;
	for (int i = 1; i < n; i++) {
		if (x[i] > x[i + 1])
			count++;
	}
	cout << count << '\n';
}
