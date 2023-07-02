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
// 一番距離が離れている家を探して、そこを除いた距離を出している
void _main() {
    int K, N;
    cin >> K >> N;

    vector<int> A(N);
    rep(i, 0, N) cin >> A.at(i);

    int d_max = 0;
    rep(i, 0, N - 1) {
        if (d_max < A.at(i + 1) - A.at(i))
            d_max = A.at(i + 1) - A.at(i);
    }

    int d_0 = (K - A.at(N - 1)) + A.at(0);

    cout << min(K - d_max, K - d_0) << endl;
}