#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

string toBinary(unsigned long long n) {
  string r;
  while (n != 0) {
    r += (n % 2 == 0 ? "0" : "2");
    n /= 2;
  }
  return r;
}

int main() {
  unsigned long long k;
  cin >> k;
  string tmp = toBinary(k);
  reverse(tmp.begin(), tmp.end());
  std::cout << tmp << std::endl;
  return 0;
}
