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
    int n = S.length();
    int ans = 0;
    bool one_flg = false;
    int idx = 0;
    while (idx < n) {
        if (idx == n - 2 && S[idx] == S[idx + 1]) {
            ans++;
            break;
        }
        if (one && S[idx] == S[idx - 1]) {
            ans++;
            idx += 2;
            one_flg = false;
        } else {
            ans++;
            idx++;
            one_flg = true;
        }
    }
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*

*/
