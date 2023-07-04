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
    int n, a[200009], L[200009], R[200009];
    cin >> n;
    rep(i, 0, n) cin >> a[i];
    int _max = -inf;
    rep(i, 0, n) {
        if (a[i] > _max)
            _max = a[i];
        L[i] = _max;
    }
    _max = -inf;
    rrep(i, n, 0) {
        if (a[i] > _max)
            _max = a[i];
        R[i] = _max;
    }
    rep(i, 0, n) {
        if (i == 0)
            cout << R[1] << endl;
        else if (i == n - 1)
            cout << L[n - 2] << endl;
        else
            cout << max(L[i - 1], R[i + 1]) << endl;
    }

    return;
}

/***************example_answer***************/
/*

*/
