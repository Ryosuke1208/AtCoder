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
    // 前から貪欲でも解けるぽい
    int N, A[100010], B[100009];
    cin >> N;
    rep(i, 0, N + 1) cin >> A[i];
    rep(i, 0, N) cin >> B[i];
    ll ans = 0;
    rrep(i, N - 1, 0) {
        if (A[i + 1] <= B[i]) {
            ans += A[i + 1];
            B[i] -= A[i + 1];
        } else {
            ans += B[i];
            B[i] = 0;
        }
        if (A[i] <= B[i]) {
            ans += A[i];
            A[i] = 0;
            B[i] -= A[i];
        } else {
            ans += B[i];
            A[i] -= B[i];
            B[i] = 0;
        }
    }
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*

*/
