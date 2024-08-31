#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	long coins[n];
	for (int i = 0; i < n; i++) {
		scanf("%ld", &coins[i]);
	}
	sort(coins, coins + n);

	long missing = 1;
	for (int i = 0; i < n; i++) {
		if (coins[i] > missing)
			break;
		else
			missing += coins[i];
	}

	printf("%ld\n", missing);
	return 0;
}
