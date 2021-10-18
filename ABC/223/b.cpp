#include <bits/stdc++.h>

using namespace std;

string shift(string str) {
  char c = str[str.size() - 1];
  str.pop_back();
  str = c + str;
  return str;
}

int main() {
  string S;
  cin >> S;

  string min = S, max = S;
  for (size_t i = 0; i < S.size(); i++) {
    S = shift(S);
    if (S.compare(max) > 0)
      max = S;
    if (S.compare(min) < 0)
      min = S;
  }
  cout << min << endl;
  cout << max << endl;
  return 0;
}
