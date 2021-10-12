#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a, b;
  int ret = 0;
  cin >> n >> a >> b;

  for (size_t i = 1; i <= n; i++) {
    int tmp = i;
    int dig = 0;
    while (tmp > 0) {
      dig += tmp % 10;
      tmp /= 10;
    }
    if (dig >= a && dig <= b)
      ret += i;
  }

  cout << ret << endl;
  return 0;
}
