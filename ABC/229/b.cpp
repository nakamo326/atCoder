#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  long long a, b;
  cin >> a >> b;
  while (true) {
    long long tmpa = 0, tmpb = 0;
    tmpa = a % 10;
    tmpb = b % 10;
    a /= 10;
    b /= 10;
    if (tmpa + tmpb >= 10) {
      std::cout << "Hard" << std::endl;
      return 0;
    }
    if (a == 0 || b == 0) {
      std::cout << "Easy" << std::endl;
      return 0;
    }
  }

  return 0;
}
