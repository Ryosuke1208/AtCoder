/********************tips********************/
#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#define all(x) (x).begin(), (x).end()
using namespace std;
void _main();
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    _main();
}
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;
template <class T> bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T> bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}
/********************************************/

/********************code********************/
void _main() {
    int n, v[59];
    cin >> n;
    rep(i, 0, n) cin >> v[i];
    // 合成するのが後になればなるほど/2される回数が増えていくので、
    // 価値の低いものから先に合成していけばいいはず
    sort(v, v + n);

    double ans = v[0];
    rep(i, 1, n) ans = (ans + v[i]) / 2;

    printf("%.6f\n", ans);
}