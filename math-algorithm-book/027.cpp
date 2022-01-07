#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n, a[200009], c[200009];

void mergeSort(ll l, ll r) {
  if (r - l == 1) return;

  ll m = (l + r) / 2;
  mergeSort(l, m);
  mergeSort(m, r);

  ll cnt = 0;
  ll c1 = l, c2 = m;
  while (c1 != m || c2 != r) {
    if (c1 == m) {
      c[cnt] = a[c2];
      c2++;
    } else if (c2 == r) {
      c[cnt] = a[c1];
      c1++;
    } else {
      if (a[c1] < a[c2]) {
        c[cnt] = a[c1];
        c1++;
      } else {
        c[cnt] = a[c2];
        c2++;
      }
    }
    cnt++;
  }
  for (ll i = 0; i < cnt; i++) a[l + i] = c[i];
}

int main() {
  cin >> n;
  for (ll i = 0; i < n; i++) cin >> a[i];

  mergeSort(0, n);
  for (ll i = 0; i < n; i++) {
    std::cout << a[i] << std::endl;
  }

  return 0;
}
