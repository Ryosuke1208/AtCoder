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
    int a, b;
    string s;
    cin >> a >> b;
    cin >> s;
    string ans = "Yes";
    if (s[a] != '-')
        ans = "No";
    rep(i, 0, a) {
        if (!isdigit(s[i]))
            ans = "No";
    }
    rep(i, a + 1, a + b + 1) {
        if (!isdigit(s[i]))
            ans = "No";
    }
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*
int A, B; string S;
//---------------------------------------------------------------------------------------------------
#define yes "Yes"
#define no "No"
int check(char c) { return '0' <= c and c <= '9'; }
string solve() {
    rep(i, 0, A) if (!check(S[i])) return no;
    if (S[A] != '-') return no;
    rep(i, A + 1, A + B + 1) if (!check(S[i])) return no;
    return yes;
}
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> A >> B >> S;
    cout << solve() << endl;
}
*/