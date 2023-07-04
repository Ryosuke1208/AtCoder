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
    // 回転行列というらしい　知りませんでした
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int dx = x2 - x1;
    int dy = y2 - y1;
    int x = x2, y = y2;
    rep(i, 0, 2) {
        int _dx = -dy;
        int _dy = dx;
        dx = _dx;
        dy = _dy;
        x += dx;
        y += dy;
        cout << x << " " << y;
        if (i == 0)
            cout << " ";
        else
            cout << endl;
    }
    return;
}

/***************example_answer***************/
/*

*/