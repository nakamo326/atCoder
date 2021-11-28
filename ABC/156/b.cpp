#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int n, k, ret = 1;
  std::cin >> n >> k;
  while (n >= k) {
    n /= k;
    ret++;
  }
  std::cout << ret << std::endl;
  return 0;
}
