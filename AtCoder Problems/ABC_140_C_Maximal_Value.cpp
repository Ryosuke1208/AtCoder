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
    int n, b[109];
    cin >> n;
    rep(i, 1, n) cin >> b[i];
    int ans = 0;
    ans += b[1];
    rep(i, 2, n) ans += min(b[i - 1], b[i]);
    // 最後はb[n-1]になるのを考えていなかったためWA
    // サンプルでたまたまOKが出てもちゃんと細部まで考えよう
    ans += b[n - 1];
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*

*/
