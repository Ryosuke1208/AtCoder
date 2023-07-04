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
    int n, m, L[100009], R[100009];
    cin >> n >> m;
    rep(i, 0, m) cin >> L[i] >> R[i];
    int _min = -inf;
    int _max = inf;
    rep(i, 0, m) {
        _min = max(L[i], _min);
        _max = min(R[i], _max);
    }
    if (_min <= _max)
        cout << _max - _min + 1 << endl;
    // 最初はここの処理がなくてWAがでた
    else
        cout << 0 << endl;
    return;
}

/***************example_answer***************/
/*

*/
