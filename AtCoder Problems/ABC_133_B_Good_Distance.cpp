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
bool isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

void _main() {
    int n, d;
    cin >> n >> d;
    int x[n][d];
    rep(i, 0, n) rep(j, 0, d) cin >> x[i][j];
    int ans = 0;
    rep(i, 0, n - 1) {
        rep(j, i + 1, n) {
            int num = 0;
            rep(k, 0, d) num += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
            if (isPerfectSquare(num))
                ans++;
        }
    }
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*
 */