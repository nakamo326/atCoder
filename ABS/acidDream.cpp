#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  while (s.empty() == false) {
    if (s.size() >= 7 && s.find("dreamer", s.size() - 7) != string::npos)
      s.erase(s.size() - 7, 7);
    else if (s.size() >= 5 && s.find("dream", s.size() - 5) != string::npos)
      s.erase(s.size() - 5, 5);
    else if (s.size() >= 6 && s.find("eraser", s.size() - 6) != string::npos)
      s.erase(s.size() - 6, 6);
    else if (s.size() >= 5 && s.find("erase", s.size() - 5) != string::npos)
      s.erase(s.size() - 5, 5);
    else {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
