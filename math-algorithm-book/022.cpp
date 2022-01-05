#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll a[200009];
  for (int i = 1; i <= n; i++) cin >> a[i];
  ll count[100009] = {0};
  for (ll i = 1; i <= n; i++) count[a[i]]++;
  ll ret = 0;
  for (ll i = 1; i <= 49999; i++) {
    ret += count[i] * count[100000 - i];
  }
  ret += count[50000] * (count[50000] - 1) / 2;
  std::cout << ret << std::endl;
  return 0;
}
