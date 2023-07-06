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
    string s;
    cin >> s;
    int n = s.length();
    if (s[0] != 'A') {
        cout << "WA" << endl;
        return;
    }
    int cnt = 0;
    rep(i, 2, n - 1) {
        if (s[i] == 'C')
            cnt++;
    }
    if (cnt != 1) {
        cout << "WA" << endl;
        return;
    }
    rep(i, 1, n) {
        if (s[i] != 'C' && s[i] >= 'A' && s[i] <= 'Z') {
            cout << "WA" << endl;
            return;
        }
    }
    cout << "AC" << endl;
    return;
}

/***************example_answer***************/
/*

*/
