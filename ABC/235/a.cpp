#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;

int main() {
  int i;
  cin >> i;
  ll a, b, c;
  c = i % 10;
  i /= 10;
  b = i % 10;
  i /= 10;
  a = i;
  ll ret =
      (a * 100 + b * 10 + c) + (b * 100 + c * 10 + a) + (c * 100 + a * 10 + b);
  std::cout << ret << std::endl;
  return 0;
}
