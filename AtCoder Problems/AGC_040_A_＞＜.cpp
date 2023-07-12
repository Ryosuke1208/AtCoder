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
    string S;
    cin >> S;
    int N = S.length() + 1;
    // 左から、右から登ってきた段数の高いほうを配列に格納していく
    vector<int> A(N, 0);
    rep(i, 0, N - 1) if (S[i] == '<') chmax(A[i + 1], A[i] + 1);
    rrep(i, N - 2, -1) if (S[i] == '>') chmax(A[i], A[i + 1] + 1);
    ll ans = 0;
    fore(a, A) ans += a;
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*

*/
