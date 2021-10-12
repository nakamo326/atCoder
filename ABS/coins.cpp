#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c, x, ret = 0;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> x;

  for (size_t i = 0; i <= a; i++) {
    for (size_t j = 0; j <= b; j++) {
      for (size_t k = 0; k <= c; k++) {
        if (i * 500 + j * 100 + k * 50 == x)
          ret++;
      }
    }
  }

  cout << ret << endl;
  return 0;
}
