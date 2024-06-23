#include <iostream>
using namespace std;

int main() {
  string dna;
  cin >> dna;

  int count = 1;
  int max_count = 1;

  for (int i = 1; i < dna.length(); i++) {
    if (dna[i] == dna[i - 1])
      count++;
    else
      count = 1;
    if (count > max_count)
      max_count = count;
  }

  cout << max_count;
}