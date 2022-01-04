#include <bits/stdc++.h>

using namespace std;

bool is_prime(size_t n) {
  if (n <= 1) {
    return false;
  }
  for (size_t i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  size_t n;
  cin >> n;
  for (size_t i = 2; i <= n; i++) {
    if (is_prime(i)) {
      if (i != 2) {
        cout << " ";
      }
      cout << i;
    }
  }
  cout << endl;
  return 0;
}
