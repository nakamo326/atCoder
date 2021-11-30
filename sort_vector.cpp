#include <bits/stdc++.h>
using namespace std;

// 多次元配列の特定のキーでソート
// 要素数2の時はpairつかう！！ vector<pair<int, int>> v(n);

vector<vector<int> > vec;
sort(vec.begin(), vec.end(),
     [](const vector<int> &alpha, const vector<int> &beta) {
       return alpha[0] < beta[0];
     });