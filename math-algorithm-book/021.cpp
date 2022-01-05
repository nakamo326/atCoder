#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

long long getFactorial(long long n) {
  long long ret = 1;
  while (n > 1) ret *= n--;
  return ret;
}

long long combinate(long long num, long long choose) {
  return getFactorial(num) / getFactorial(choose) / getFactorial(num - choose);
}

int main() {
  ll n, r;
  cin >> n >> r;
  ll ret = combinate(n, r);
  std::cout << ret << std::endl;
  return 0;
}
