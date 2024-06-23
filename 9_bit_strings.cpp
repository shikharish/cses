#include <iostream>
using namespace std;

long fast_power(long a, long b) {
  long c;
  long power;
  if (b == 1)
    return a;

  c = a * a % 1000000007;
  power = fast_power(c, b / 2);

  if (b % 2 != 0)
    return (a * power) % 1000000007;
  else
    return power % 1000000007;
}

int main() {
  int n;
  cin >> n;
  cout << fast_power(2, n);
}
