#include <iostream>
using namespace std;

int main() {
	// char s[1000001];
	// scanf("%1000000s", s);
	// int n = strlen(s);
	// long arr[26] = {0};
	// for (long i = 0; i < n; i++) {
	// 	arr[s[i] - 65]++;
	// 	s[i] = 0;
	// }
	// int n_odd = 0;
	// int i_odd;
	// for (int i = 0; i < 26; i++) {
	// 	if (arr[i] % 2 != 0) {
	// 		n_odd++;
	// 		i_odd = i;
	// 	}
	// }
	// if (n % 2 != 0 && n_odd != 1) {
	// 	printf("NO SOLUTION\n");
	// 	return 0;
	// }
	// if (n % 2 == 0 && n_odd != 0) {
	// 	printf("NO SOLUTION\n");
	// 	return 0;
	// }
	// int j = 0;
	// for (int i = 0; i < 26; i++) {
	// 	for (int k = 0; k < arr[i] / 2; k++) {
	// 		s[j] = i + 'A';
	// 		j++;
	// 	}
	// }
	// if (n_odd == 1) {
	// 	s[n / 2] = i_odd + 'A';
	// 	j++;
	// }
	// for (int i = 25; i >= 0; i--) {
	// 	for (int k = 0; k < arr[i] / 2; k++) {
	// 		s[j] = i + 'A';
	// 		j++;
	// 	}
	// }
	// printf("%s\n", s);

	string s;
	cin >> s;
	int n = s.length();
	long arr[26] = {0};
	for (long i = 0; i < n; i++) {
		arr[s[i] - 65]++;
	}
	int n_odd = 0;
	int i_odd;
	for (int i = 0; i < 26; i++) {
		if (arr[i] % 2 != 0) {
			n_odd++;
			i_odd = i;
		}
	}
	if (n % 2 != 0 && n_odd != 1) {
		cout << "NO SOLUTION";
		return 0;
	}
	if (n % 2 == 0 && n_odd != 0) {
		cout << "NO SOLUTION";
		return 0;
	}

	int j = 0;
	for (int i = 0; i < 26; i++) {
		for (int k = 0; k < arr[i] / 2; k++) {
			s[j] = i + 'A';
			j++;
		}
	}
	if (n_odd == 1) {
		s[n / 2] = i_odd + 'A';
		j++;
	}
	for (int i = 25; i >= 0; i--) {
		for (int k = 0; k < arr[i] / 2; k++) {
			s[j] = i + 'A';
			j++;
		}
	}

	cout << s;
}
