#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  long total, rem, req;
  for (long i = 1; i <= n; i++) {
    total = i * i * (i * i - 1) / 2;
    rem = (i - 1) * (i - 2) * 4;
    req = total - rem;
    cout << req << '\n';
  }
}
