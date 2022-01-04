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

long long getLCM(long long a, long long b) { return a / getGCD(a, b) * b; }

long long getLcmVec(vector<long long> vec) {
  ll ret = vec.at(0);
  for (size_t i = 1; i < vec.size(); i++) {
    ret = getLCM(ret, vec.at(i));
  }
  return ret;
}

int main() {
  int n;
  cin >> n;
  vector<ll> num;
  for (int i = 0; i < n; i++) {
    ll tmp;
    cin >> tmp;
    num.push_back(tmp);
  }
  ll ret = getLcmVec(num);
  std::cout << ret << std::endl;
  return 0;
}
