#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

template <typename T>
void output_vector(vector<T> vec) {
  for (typename vector<T>::iterator i = vec.begin(); i != vec.end(); i++) {
    std::cout << *i << std::endl;
  }
}

vector<long long> enumDivisor(long long n) {
  vector<long long> ret;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ret.push_back(i);
      // if (i != 1 && i * i != n) { // not in n
      if (i * i != n) {  // include n
        ret.push_back(n / i);
      }
    }
  }
  // sort(ret.begin(), ret.end());
  return ret;
}

int main() {
  ll n;
  cin >> n;
  vector<ll> ret = enumDivisor(n);
  sort(ret.begin(), ret.end());
  output_vector(ret);
  return 0;
}
