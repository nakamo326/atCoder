#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll n, dp[100] = {0};
  cin >> n;

  for (ll i = 0; i <= n; i++) {
    if (i <= 1)
      dp[i] = 1;
    else
      dp[i] = dp[i - 1] + dp[i - 2];
  }
  std::cout << dp[n] << std::endl;
  return 0;
}