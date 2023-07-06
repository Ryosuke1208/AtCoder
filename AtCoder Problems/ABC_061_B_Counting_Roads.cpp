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
    int n, m, a[59], b[59], city[59];
    cin >> n >> m;
    rep(i, 0, m) cin >> a[i] >> b[i];
    rep(i, 0, 59) city[i] = 0;
    rep(i, 0, m) {
        city[a[i] - 1]++;
        city[b[i] - 1]++;
    }
    rep(i, 0, n) cout << city[i] << endl;
    return;
}

/***************example_answer***************/
/*

*/
