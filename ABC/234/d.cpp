// tokenakatta

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;
  ll p[500000];
  for (ll i = 0; i < n; i++) cin >> p[i];

  priority_queue<ll, vector<ll>, greater<ll>> que;
  for (size_t i = 0; i < k; i++) que.push(p[i]);

  std::cout << que.top() << std::endl;

  for (ll i = k; i < n; i++) {
    if (que.top() < p[i]) {
      que.pop();
      que.push(p[i]);
    }
    std::cout << que.top() << std::endl;
  }

  return 0;
}
