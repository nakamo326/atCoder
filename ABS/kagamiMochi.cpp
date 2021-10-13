#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, ret = 1;
  int arr[120];

  cin >> n;
  for (size_t i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n, greater<int>());
  int tmp = arr[0];
  for (size_t i = 1; i < n; i++) {
    if (arr[i] < tmp) {
      tmp = arr[i];
      ret++;
    }
  }
  cout << ret << endl;
  return 0;
}

// std::set , std::map