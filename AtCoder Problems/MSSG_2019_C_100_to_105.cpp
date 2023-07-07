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
    int X;
    bool x[100009];
    cin >> X;
    rep(i, 1, 100001) x[i] = false;
    x[0] = true;
    rep(i, 0, 99896) {
        if (x[i]) {
            x[i + 100] = true;
            x[i + 101] = true;
            x[i + 102] = true;
            x[i + 103] = true;
            x[i + 104] = true;
            x[i + 105] = true;
        }
    }
    if (x[X])
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return;
}

/***************example_answer***************/
/*

*/
