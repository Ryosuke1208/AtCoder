/********************tips********************/
#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i > b; i--)
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
    int n, t, a, h[1009];
    cin >> n;
    cin >> t >> a;
    rep(i, 0, n) cin >> h[i];
    int idx = -1;
    // 最初intで計算してしまったためWAが出た ちゃんとdoubleにする必要あり！！
    double diff = 1e9;
    rep(i, 0, n) {
        double tmp = t - h[i] * 0.006;
        if (abs(tmp - a) < diff) {
            idx = i + 1;
            diff = abs(tmp - a);
        }
    }
    cout << idx << endl;
    return;
}

/***************example_answer***************/
/*

*/
