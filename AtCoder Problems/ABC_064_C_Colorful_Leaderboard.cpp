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
    int N, a[109], r[9];
    cin >> N;
    rep(i, 0, N) cin >> a[i];
    rep(i, 0, 9) r[i] = 0;
    rep(i, 0, N) {
        if (a[i] < 400)
            r[0]++;
        else if (a[i] < 800)
            r[1]++;
        else if (a[i] < 1200)
            r[2]++;
        else if (a[i] < 1600)
            r[3]++;
        else if (a[i] < 2000)
            r[4]++;
        else if (a[i] < 2400)
            r[5]++;
        else if (a[i] < 2800)
            r[6]++;
        else if (a[i] < 3200)
            r[7]++;
        else
            r[8]++;
    }
    int color = 0;
    rep(i, 0, 8) if (r[i]) color++;
    // 色を自由に変えられる＝もともとある色以外もOKみたい
    // はじめ色の制限をつけててWAだった
    int _max = color + r[8];
    int _min = max(color, 1);
    cout << _min << " " << _max << endl;
    return;
}

/***************example_answer***************/
/*

*/
