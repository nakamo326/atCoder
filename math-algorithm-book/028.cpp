#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll n, h[100000], dp[100000];
  cin >> n;
  for (ll i = 0; i < n; i++) cin >> h[i];

  for (ll i = 0; i < n; i++) {
    if (i == 0) dp[i] = 0;
    if (i == 1) dp[i] = abs(h[i - 1] - h[i]);
    if (i >= 2) {
      ll j1 = dp[i - 1] + abs(h[i - 1] - h[i]);
      ll j2 = dp[i - 2] + abs(h[i - 2] - h[i]);
      dp[i] = min(j1, j2);
    }
  }
  std::cout << dp[n - 1] << std::endl;
  return 0;
}