#include <iostream>
using namespace std;

int main() {
  long n;
  cin >> n;

  long long sum = 0;
  long tmp;
  for (int i = 0; i < n - 1; i++) {
    cin >> tmp;
    sum += tmp;
  }

  long miss = n * (n + 1) / 2 - sum;
  cout << miss;
}