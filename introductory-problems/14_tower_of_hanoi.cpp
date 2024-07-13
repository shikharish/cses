#include <iostream>
using namespace std;

void move(int n, int from, int to) {
	if (n == 1) {
		cout << from << " " << to << "\n";
		return;
	}
	int spare = 6 - from - to;
	move(n - 1, from, spare);
	cout << from << " " << to << "\n";
	move(n - 1, spare, to);
}

int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	cout << (1 << n) - 1 << "\n";
	move(n, 1, 3);
}
