#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a = 0, b = 0;
  int arr[120];

  cin >> n;
  for (size_t i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n, greater<int>());
  for (size_t i = 0; i < n; i++) {
    if (i % 2 == 0)
      a += arr[i];
    else
      b += arr[i];
  }
  cout << a - b << endl;
  return 0;
}
