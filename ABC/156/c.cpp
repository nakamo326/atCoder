#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> x(n);
  for (int i = 0; i < n; i++) {
    std::cin >> x.at(i);
  }
  int max = *std::max_element(x.begin(), x.end());
  int ret = std::numeric_limits<int>::max();
  for (int i = 0; i < max; i++) {
    int tmp = 0;
    for (int j = 0; j < n; j++) {
      tmp += std::pow((x.at(j) - (i + 1)), 2);
    }
    if (tmp < ret)
      ret = tmp;
  }
  std::cout << ret << std::endl;
  return 0;
}
