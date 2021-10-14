#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, y;

  cin >> n >> y;
  int total;
  for (int i = 0; i <= n; i++) {
    for (int j = 0; i + j <= n; j++) {
      int k = n - i - j;
      total = i * 1000 + j * 5000 + k * 10000;
      if (total == y) {
        cout << k << " " << j << " " << i << endl;
        return 0;
      }
    }
  }
  cout << "-1 -1 -1" << endl;
  return 0;
}

// int main() {
//   int n, y;

//   cin >> n >> y;
//   int total;
//   for (int i = 0; i <= n; i++) {
//     for (int j = 0; i + j <= n; j++) {
//       for (int k = 0; i + j + k <= n; k++) {
//         total = i * 1000 + j * 5000 + k * 10000;
//         if (total == y && i + j + k == n) {
//           cout << k << " " << j << " " << i << endl;
//           return 0;
//         }
//       }
//     }
//   }

//   cout << "-1 -1 -1" << endl;
//   return 0;
// }
