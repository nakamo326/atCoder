#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, t;
  cin >> s;
  for (size_t i = 0; i < 100; i++) {
    t += "oxx";
  }
  if (t.find(s, 0) == string::npos)
    std::cout << "No" << std::endl;
  else
    std::cout << "Yes" << std::endl;
  return 0;
}
