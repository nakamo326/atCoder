#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll w[110], v[110];
ll dp[109][100009];

int main() {
  ll n, total_w;
  cin >> n >> total_w;
  for (ll i = 1; i <= n; i++) cin >> w[i] >> v[i];
  dp[0][0] = 0;
  for (ll i = 1; i <= total_w; i++) dp[0][i] = -(1LL << 60);

  for (ll i = 1; i <= n; i++) {
    for (ll j = 0; j <= total_w; j++) {
      if (j < w[i]) dp[i][j] = dp[i - 1][j];
      if (j >= w[i]) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
    }
  }
  ll ret = 0;
  for (ll i = 0; i <= total_w; i++) ret = max(ret, dp[n][i]);
  std::cout << ret << std::endl;
  return 0;
}
