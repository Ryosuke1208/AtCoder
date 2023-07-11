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
    // 実行制限オーバー連発したポイ？？
    ll N;
    ll A[200009];
    ll total = 0;
    cin >> N;
    rep(i, 0, N) {
        cin >> A[i];
        total += A[i];
    }
    ll sum = 0;
    ll ans = total;
    rep(i, 0, N) {
        sum += A[i];
        ans = min(ans, abs(sum - (total - sum)));
    }
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*

*/
