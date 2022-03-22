#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) std::begin(x), std::end(x)

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;

ll r, c, sx, sy, gx, gy;
std::vector<std::string> m(50);
std::queue<std::pair<int, int>> q;

std::vector<std::vector<int>> ret(50);

int main() {
  cin >> r >> c;
  cin >> sy >> sx;
  sx--;
  sy--;
  cin >> gy >> gx;
  gx--;
  gy--;
  for (size_t i = 0; i < r; i++) {
    cin >> m[i];
  }
  for (size_t i = 0; i < 50; i++) {
    ret[i].assign(50, -1);
  }

  ret[sy][sx] = 0;
  q.push(std::make_pair(sx, sy));
  while (!q.empty()) {
    ll x = q.front().first;
    ll y = q.front().second;
    q.pop();

    if (m[y - 1][x] == '.' && ret[y - 1][x] == -1) {
      ret[y - 1][x] = ret[y][x] + 1;
      q.push(make_pair(x, y - 1));
    }
    if (m[y + 1][x] == '.' && ret[y + 1][x] == -1) {
      ret[y + 1][x] = ret[y][x] + 1;
      q.push(make_pair(x, y + 1));
    }
    if (m[y][x - 1] == '.' && ret[y][x - 1] == -1) {
      ret[y][x - 1] = ret[y][x] + 1;
      q.push(make_pair(x - 1, y));
    }
    if (m[y][x + 1] == '.' && ret[y][x + 1] == -1) {
      ret[y][x + 1] = ret[y][x] + 1;
      q.push(make_pair(x + 1, y));
    }
  }

  std::cout << ret[gy][gx] << std::endl;
  return 0;
}
