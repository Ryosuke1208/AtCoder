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
    int A[3][3], N, b[11], Answer[3][3];
    rep(i, 0, 3) { rep(j, 0, 3) cin >> A[i][j]; }
    rep(i, 0, 3) { rep(j, 0, 3) Answer[i][j] = 0; }
    cin >> N;
    rep(i, 0, N) {
        cin >> b[i];
        rep(j, 0, 3) {
            rep(k, 0, 3) if (A[j][k] == b[i]) { Answer[j][k] = 1; };
        }
    }
    rep(i, 0, 3) {
        if ((Answer[i][0] == 1 && Answer[i][1] == 1 && Answer[i][2] == 1) ||
            (Answer[0][i] == 1 && Answer[1][i] == 1 && Answer[2][i] == 1) ||
            (Answer[0][0] == 1 && Answer[1][1] == 1 && Answer[2][2] == 1) ||
            (Answer[0][2] == 1 && Answer[1][1] == 1 && Answer[2][0] == 1)) {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}