#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  long long ret = 1;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    ret *= i;
  }
  cout << ret << endl;
  return 0;
}
