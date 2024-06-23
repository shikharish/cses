#include <iostream>
using namespace std;

int main() {
  long t, x, y;
  cin >> t;
  long n[t];
  for (long i = 0; i < t; i++) {
    cin >> y;
    cin >> x;
    if (x >= y) {
      n[i] = x * x + (x % 2 == 0 ? -(2 * x - 1) + y : -(y - 1));
    } else {
      n[i] = y * y + (y % 2 != 0 ? -(2 * y - 1) + x : -(x - 1));
    }
  }
  for (long i = 0; i < t; i++) {
    cout << n[i] << '\n';
  }
}
