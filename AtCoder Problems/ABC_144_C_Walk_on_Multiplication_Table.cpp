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
    ll N;
    cin >> N;
    ll ans = infl;
    // Nをsqrtでとっていたがなんかうまくいかなかったので直接入力
    // 10^12なので10^6を範囲でとればいいだけだったが、なぜうまくいかなかったのか、、、
    rep(i, 1, 1010109) {
        if (N % i == 0) {
            ll j = N / i;
            ll move = (i - 1) + (j - 1);
            ans = min(ans, move);
        }
    }
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*

*/
