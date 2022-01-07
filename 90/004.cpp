#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll h, w;
  cin >> h >> w;
  ll cross[h][w];
  for (ll i = 0; i < h; i++) {
    for (ll j = 0; j < w; j++) {
      cin >> cross[i][j];
    }
  }
  ll hSum[2000] = {0}, wSum[2000] = {0};
  for (ll i = 0; i < h; i++) {
    for (ll j = 0; j < w; j++) {
      hSum[i] += cross[i][j];
      wSum[j] += cross[i][j];
    }
  }

  for (ll i = 0; i < h; i++) {
    for (ll j = 0; j < w; j++) {
      cross[i][j] = hSum[i] + wSum[j] - cross[i][j];
    }
  }
  for (ll i = 0; i < h; i++) {
    for (ll j = 0; j < w; j++) {
      std::cout << cross[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
