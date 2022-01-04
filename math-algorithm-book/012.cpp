#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool isPrime(long long n) {
  if (n <= 1) return false;
  for (long long i = 2; i * i < n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  ll n;
  cin >> n;
  if (isPrime(n))
    std::cout << "Yes" << std::endl;
  else
    std::cout << "No" << std::endl;
  return 0;
}
