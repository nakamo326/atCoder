#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll n, x;
  cin >> n >> x;
  vector<ll> a;
  for (ll i = 0; i < n; i++) {
    ll tmp;
    cin >> tmp;
    a.push_back(tmp);
  }
  sort(a.begin(), a.end());
  if (binary_search(a.begin(), a.end(), x))
    std::cout << "Yes" << std::endl;
  else
    std::cout << "No" << std::endl;
  return 0;
}
