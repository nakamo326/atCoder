#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

ll getCross(ll vec1[2], ll vec2[2]) {
  return vec1[0] * vec2[1] - vec1[1] * vec2[0];
}

int main() {
  ll x1, y1, x2, y2, x3, y3, x4, y4;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  cin >> x3 >> y3;
  cin >> x4 >> y4;

  ll ab[2] = {x2 - x1, y2 - y1};
  ll ac[2] = {x3 - x1, y3 - y1};
  ll ad[2] = {x4 - x1, y4 - y1};

  ll cd[2] = {x4 - x3, y4 - y3};
  ll ca[2] = {x1 - x3, y1 - y3};
  ll cb[2] = {x2 - x3, y2 - y3};

  ll cross1 = getCross(ab, ac);
  ll cross2 = getCross(ab, ad);
  ll cross3 = getCross(cd, ca);
  ll cross4 = getCross(cd, cb);
  // wakaran
  if (cross1 == 0 && cross2 == 0 && cross3 == 0 && cross4 == 0) {
    pair<ll, ll> A = make_pair(x1, y1);
    pair<ll, ll> B = make_pair(x2, y2);
    pair<ll, ll> C = make_pair(x3, y3);
    pair<ll, ll> D = make_pair(x4, y4);

    if (A > B) swap(A, B);
    if (C > D) swap(C, D);
    if (max(A, C) <= min(B, D))
      std::cout << "Yes" << std::endl;
    else
      std::cout << "No" << std::endl;
    return 0;
  }

  if ((cross1 <= 0 && cross2 >= 0) || (cross1 >= 0 && cross2 <= 0)) {
    if ((cross3 <= 0 && cross4 >= 0) || (cross3 >= 0 && cross4 <= 0)) {
      std::cout << "Yes" << std::endl;
      return 0;
    }
  }
  std::cout << "No" << std::endl;
}
