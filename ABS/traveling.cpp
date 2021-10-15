#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int x[110000], y[110000], t[110000];

  cin >> n;
  x[0] = y[0] = t[0] = 0;
  for (size_t i = 0; i < n; ++i) cin >> t[i + 1] >> x[i + 1] >> y[i + 1];

  bool can = true;
  for (int i = 0; i < n; ++i) {
    int dt = t[i + 1] - t[i];
    int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
    if (dt < dist)
      can = false;
    if (dist % 2 != dt % 2)
      can = false;
  }

  if (can == true)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
