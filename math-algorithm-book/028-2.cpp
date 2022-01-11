#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll h[100010];
  for (ll i = 0; i < n; i++) cin >> h[i];
  ll dp[100010] = {0};
  dp[1] = abs(h[0] - h[1]);
  for (ll i = 2; i < n; i++) {
    ll j1 = dp[i - 2] + abs(h[i - 2] - h[i]);
    ll j2 = dp[i - 1] + abs(h[i - 1] - h[i]);
    dp[i] = min(j1, j2);
  }
  std::cout << dp[n - 1] << std::endl;
  return 0;
}
