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
    int h, w;
    char a[109][109];
    cin >> h >> w;
    rep(i, 1, h + 1) rep(j, 1, w + 1) cin >> a[i][j];
    rep(i, 0, h + 2) {
        rep(j, 0, w + 2) {
            if (i == 0 || i == h + 1)
                cout << '#';
            else if (j == 0 || j == w + 1)
                cout << '#';
            else
                cout << a[i][j];
        }
        cout << endl;
    }
    return;
}

/***************example_answer***************/
/*

*/
