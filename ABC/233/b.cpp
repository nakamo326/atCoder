#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll l, r;
  cin >> l >> r;
  string s;
  cin >> s;
  for (ll i = 0; i < s.size(); i++) {
    if (i >= l - 1 && i <= r - 1) {
      std::cout << s.at(r - i + l - 2);
    } else {
      std::cout << s.at(i);
    }
  }
  std::cout << std::endl;
  return 0;
}
