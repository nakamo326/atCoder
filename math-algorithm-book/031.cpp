#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll a[500009];
ll dp[500009] = {0};
ll dp2[500009] = {0};

int main() {
  ll n;
  cin >> n;
  for (ll i = 1; i <= n; i++) cin >> a[i];
  for (ll i = 1; i <= n; i++) {
    dp[i] = dp2[i - 1] + a[i];
    dp2[i] = max(dp[i - 1], dp2[i - 1]);
  }
  std::cout << max(dp[n], dp2[n]) << std::endl;
  return 0;
}
