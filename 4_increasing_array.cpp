#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int tmp1, tmp2;
  long moves = 0;
  cin >> tmp1;
  for (int i = 0; i < n - 1; i++) {
    cin >> tmp2;
    if (tmp2 < tmp1)
      moves += tmp1 - tmp2;
    else
      tmp1 = tmp2;
  }
  cout << moves;
}
