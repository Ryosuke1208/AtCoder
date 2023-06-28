#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, f) for (int i = s; i < (int)f; i++)
const int inf = 1e9;

int main() {
    int N;
    cin >> N;
    vector<int> X(N);
    rep(i, 0, N) cin >> X[i];
    int ans = inf;
    // Pは任意の整数値の座標で開くことができるから1<=P<=Nではなくて、
    // 1<=P<=100の範囲でみている
    rep(i, 1, 100) {
        int cost = 0;
        rep(j, 0, N) cost += (X[j] - i) * (X[j] - i);
        ans = min(ans, cost);
    }
    cout << ans << endl;
    return 0;
}