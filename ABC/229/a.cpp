#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  string s[2];
  bool ret = true;
  cin >> s[0] >> s[1];
  // if (s[0][0] == '#' && s[1][0] == '.' && s[0][1] == '.')
  //   ret = false;
  // if (s[0][1] == '#' && s[0][0] == '.' && s[1][1] == '.')
  //   ret = false;
  // if (s[1][0] == '#' && s[1][1] == '.' && s[0][0] == '.')
  //   ret = false;
  // if (s[1][1] == '#' && s[1][0] == '.' && s[0][1] == '.')
  //   ret = false;
  if ((s[0] == ".#" && s[1] == "#.") || (s[0] == "#." && s[1] == ".#"))
    ret = false;
  if (ret == true)
    std::cout << "Yes" << std::endl;
  else
    std::cout << "No" << std::endl;
  return 0;
}
