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
    string s;
    cin >> s;
    int ans = inf;
    int n = s.length();
    rep(i, 0, n - 2) {
        int num = (s[i] - '0') * 100 + (s[i + 1] - '0') * 10 + s[i + 2] - '0';
        ans = min(ans, abs(num - 753));
    }
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*

*/