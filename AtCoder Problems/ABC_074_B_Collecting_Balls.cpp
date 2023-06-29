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
// unneccesary proc
void _main() {
    int N, K;
    int x[109];
    int ball[109][109] = {0};
    cin >> N;
    cin >> K;
    rep(i, 1, N + 1) cin >> x[i];
    rep(i, 1, N + 1) ball[x[i]][i] = 1;
    int total = 0;
    rep(x, 1, N + 1) {
        rep(y, 1, K + 1) {
            if (ball[y][x] == 1) {
                total += min((y * 2), ((K - y) * 2));
            }
        }
    }
    cout << total << endl;
}

/***************exmple_answer****************/
int N, K, X[101];
void _main() {
    cin >> N >> K;
    rep(i, 0, N) cin >> X[i];

    int ans = 0;
    rep(i, 0, N) ans += min(X[i] * 2, (K - X[i]) * 2);
    cout << ans << endl;
}