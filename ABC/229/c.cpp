#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  long long w;
  cin >> n >> w;
  vector<vector<long long> > ab(n, vector<long long>(2));
  for (long long i = 0; i < n; i++) {
    cin >> ab.at(i).at(0) >> ab.at(i).at(1);
  }
  std::sort(ab.begin(),
            ab.end(),
            [](const vector<long long> &alpha, const vector<long long> &beta) {
              return alpha[0] > beta[0];
            });
  long long ret = 0;
  for (long long i = 0; w > 0 && i < n; i++) {
    if (w - ab.at(i).at(1) >= 0) {
      ret += ab.at(i).at(0) * ab.at(i).at(1);
      w -= ab.at(i).at(1);
    } else {
      ret += ab.at(i).at(0) * w;
      break;
    }
  }
  std::cout << ret << std::endl;

  return 0;
}
