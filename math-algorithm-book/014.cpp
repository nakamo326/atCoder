#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

template <typename T>
void outputVector(vector<T> vec) {
  for (size_t i = 0; i < vec.size() - 1; i++) {
    std::cout << vec.at(i) << " ";
  }
  std::cout << vec.back() << std::endl;
}

int main() {
  ll n;
  cin >> n;
  vector<ll> ret;
  for (ll i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      ret.push_back(i);
      n /= i;
    }
  }
  if (n != 1) ret.push_back(n);
  outputVector(ret);
  return 0;
}
