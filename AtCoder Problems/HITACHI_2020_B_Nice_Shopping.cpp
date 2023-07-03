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
    int A, B, M, a[100009], b[100009], c[100009], x[100009], y[100009];
    cin >> A >> B >> M;
    rep(i, 0, A) cin >> a[i];
    rep(i, 0, B) cin >> b[i];
    rep(i, 0, M) cin >> x[i] >> y[i] >> c[i];

    int min_A = *min_element(a, a + A);
    int min_B = *min_element(b, b + B);
    int min_num = min_A + min_B;
    rep(i, 0, M) {
        int total = a[x[i]] + b[y[i]] - c[i];
        min_num = (total, min_num);
    }
    cout << min_num << endl;
    return;
}

/***************example_answer***************/
/*

*/