#include <bits/stdc++.h>

using namespace std;

int main() {
  int num = 0;
  string s;
  cin >> s;

  for (size_t i = 0; i < 3; i++) {
    if (s[i] == '1')
      num++;
  }
  cout << num << endl;
  return 0;
}
