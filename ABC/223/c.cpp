#include <bits/stdc++.h>

using namespace std;

// not solved
int main() {
  int n;
  double ret;
  int a[1100], b[1100];
  double s[1100];

  cin >> n;
  int total_len = 0;
  for (size_t i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    s[i] = (double)(a[i] / b[i]);
    total_len += a[i];
  }

  int llen = 0, rlen = 0;
  int li = 0, ri = n - 1;
  while (true) {
    s[li] = s[li] - 1;
    llen += b[li];
    if (s[li] == 0)
      li++;
    s[ri] = s[ri] - 1;
    rlen += b[ri];
    if (s[ri] == 0)
      ri = ri - 1;
    if (llen + rlen == total_len) {
      ret = (double)llen;
      cout << ret << endl;
      return 0;
    }
    if (li == ri)
      break;
  }
  int rest = total_len - llen - rlen;
  ret = llen + ((double)rest / b[ri]);
  cout << ret << endl;
  return 0;
}
