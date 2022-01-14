#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;

long long getGCD(long long a, long long b) {
  while (a != 0 && b != 0) {
    if (a > b)
      a = a % b;
    else
      b = b % a;
  }
  return a ? a : b;
}

long long getGcdVec(vector<long long> vec) {
  ll ret = vec.at(0);
  for (size_t i = 1; i < vec.size(); i++) {
    ret = getGCD(ret, vec.at(i));
  }
  return ret;
}

int main() {
  vll vec(3);
  cin >> vec[0] >> vec[1] >> vec[2];
  ll gcd = getGcdVec(vec);
  ll ret = 0;
  for (ll i = 0; i < 3; i++) {
    ret += vec[i] / gcd - 1;
  }
  std::cout << ret << std::endl;
  return 0;
}
