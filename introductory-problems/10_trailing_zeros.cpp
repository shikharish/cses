#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int zeros = 0;
	while (n > 0) {
		zeros += n / 5;
		n /= 5;
	}
    cout << zeros;
}
