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
    int v[3];
    rep(i, 0, 3) cin >> v[i];
    int odd = 0, even = 0;
    rep(i, 0, 3) {
        if (v[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    int ans = 0;
    // 偶奇を合わせる
    if (odd == 2) {
        ans++;
        rep(i, 0, 3) if (v[i] % 2 == 1) v[i]++;
    } else if (even == 2) {
        ans++;
        rep(i, 0, 3) if (v[i] % 2 == 0) v[i]++;
    }

    int _max = max(v[0], max(v[1], v[2]));
    rep(i, 0, 3) ans += (_max - v[i]) / 2;
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*

*/
