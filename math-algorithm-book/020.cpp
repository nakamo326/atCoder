#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll n, ret = 0;
  cin >> n;
  ll a[200];
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (ll i = 0; i < n; i++) {
    for (ll j = i + 1; j < n; j++) {
      for (ll k = j + 1; k < n; k++) {
        for (ll l = k + 1; l < n; l++) {
          for (ll m = l + 1; m < n; m++) {
            if (a[i] + a[j] + a[k] + a[l] + a[m] == 1000) ret++;
          }
        }
      }
    }
  }
  std::cout << ret << std::endl;
  return 0;
}
