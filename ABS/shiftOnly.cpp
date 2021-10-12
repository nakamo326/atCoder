#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, ret = 0;
  int arr[200];

  cin >> n;
  for (size_t i = 0; i < n; i++) {
    cin >> arr[i];
  }
  while (true) {
    for (size_t i = 0; i < n; i++) {
      if (arr[i] % 2 == 0) {
        arr[i] /= 2;
      } else {
        cout << ret << endl;
        return 0;
      }
    }
    ret++;
  }
  return 0;
}
