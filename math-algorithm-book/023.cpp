#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll b = 0, r = 0;
  for (int i = 0; i < n; i++) {
    ll tmp;
    cin >> tmp;
    b += tmp;
  }
  for (int i = 0; i < n; i++) {
    ll tmp;
    cin >> tmp;
    r += tmp;
  }
  double ret = (double)b / n + (double)r / n;
  std::cout << fixed << ret << std::endl;
  return 0;
}
