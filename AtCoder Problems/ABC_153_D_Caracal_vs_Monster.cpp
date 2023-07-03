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
    ll H;
    cin >> H;
    ll cnt = 0;
    while (true) {
        ll idx = 1LL << cnt;
        if (idx > H || idx <= 0) {
            cout << (1LL << cnt) - 1 << endl;
            return;
        }
        cnt++;
    }
    return;
}

/***************example_answer***************/
/*
ll H;
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> H;

    ll cnt = 1, ans = 0;
    while (0 < H) {
        ans += cnt;
        H /= 2;
        cnt *= 2;
    }

    cout << ans << endl;
}

*/