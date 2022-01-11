#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll dp[110][100010] = {0};

int main() {
  ll N, W;
  cin >> N >> W;
  ll w[110], v[110];
  for (ll i = 1; i <= N; i++) {
    cin >> w[i] >> v[i];
  }
  for (ll i = 0; i < 100010; i++) {
    dp[0][i] = -1;
  }
  dp[0][0] = 0;
  for (ll i = 0; i < N; i++) {
    for (ll j = 0; j < W; j++) {
    }
  }

  return 0;
}
