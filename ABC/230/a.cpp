#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  if (n >= 42)
    std::cout << "AGC" << setfill('0') << right << setw(3) << n + 1 << endl;
  else
    cout << "AGC" << setfill('0') << right << setw(3) << n << endl;
  return 0;
}
