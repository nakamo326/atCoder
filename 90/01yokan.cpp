#include <bits/stdc++.h>

// https://qiita.com/e869120/items/1b2a5f0f07fd927e44e9#4-2-%E5%95%8F%E9%A1%8C-001yokan-party4

using namespace std;

long long n, l, k;
long long a[10000000000];

bool solve(long long mid) {
  long long cnt = 0, pre = 0;
  for (size_t i = 0; i < n; i++) {
    if (a[i] - pre >= mid && l - a[i] >= mid) {
      cnt += 1;
      pre = a[i];
    }
  }
  if (cnt >= k)
    return true;
  return false;
}

int main() {
  cin >> n >> l;
  cin >> k;
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }

  long long left = -1;
  long long right = l + 1;
  while (right - left > 1) {
    long long mid = left + (right - left) / 2;
    if (solve(mid) == false)
      right = mid;
    else
      left = mid;
  }
  std::cout << left << std::endl;
  return 0;
}
