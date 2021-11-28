#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int n, r, ret;
  std::cin >> n >> r;
  if (n < 10) {
    ret = r + 100 * (10 - n);
  } else {
    ret = r;
  }
  std::cout << ret << std::endl;
  return 0;
}
