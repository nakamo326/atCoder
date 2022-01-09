#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool dp[61][10001] = {0};

int main() {
  int n, s;
  cin >> n >> s;
  int a[61];
  for (int i = 1; i <= n; i++) cin >> a[i];

  dp[0][0] = true;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= s; j++) {
      if (j < a[i]) dp[i][j] = dp[i - 1][j];
      if (j >= a[i]) {
        if (dp[i - 1][j] == true || dp[i - 1][j - a[i]] == true) {
          dp[i][j] = true;
        }
      }
    }
  }

  if (dp[n][s] == true)
    std::cout << "Yes" << std::endl;
  else
    std::cout << "No" << std::endl;
  return 0;
}
