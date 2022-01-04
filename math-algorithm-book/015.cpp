#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

long long getGCD(long long a, long long b) {
  while (a != 0 && b != 0) {
    if (a > b)
      a = a % b;
    else
      b = b % a;
  }
  return a ? a : b;
}

int main() {
  ll a, b;
  cin >> a >> b;
  ll ret = getGCD(a, b);
  std::cout << ret << std::endl;
  return 0;
}
