#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll dp[60] = {0};
  dp[0] = 1;
  dp[1] = 1;
  for (ll i = 2; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  std::cout << dp[n] << std::endl;
  return 0;
}
