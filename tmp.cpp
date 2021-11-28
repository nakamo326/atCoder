#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int a, b;
  std::cin >> a >> b;
  for (size_t i = 0; i < 20; i++) {
    if ((a * i - (i - 1)) >= b) {
      std::cout << i << std::endl;
      return 0;
    }
  }
  return 0;
}
