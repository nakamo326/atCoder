#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, a, b, p, q, r, s;
  cin >> n >> a >> b;
  cin >> p >> q >> r >> s;

  long long fk_min = max(1 - a, 1 - b);
  long long fk_max = min(n - a, n - b);
  long long sk_min = max(1 - a, b - n);
  long long sk_max = min(n - a, b - 1);
  string board[(q - p + 1)];
  for (long long i = 0; i < (q - p + 1); i++) {
    for (long long j = 0; j < (s - r + 1); j++) {
      long long x = i + p;
      long long y = j + r;
      board[i] += ".";
      if (fk_min <= (x - a) && fk_max >= (x - a)) {
        long long k = x - a;
        if ((k + b) == y)
          board[i][j] = '#';
      }
      if (sk_min <= (x - a) && sk_max >= (x - a)) {
        long long k = x - a;
        if ((b - k) == y)
          board[i][j] = '#';
      }
    }
    std::cout << board[i] << std::endl;
  }
  return 0;
}
