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
    string w;
    int words[26];
    rep(i, 0, 26) words[i] = 0;
    cin >> w;
    int n = w.length();
    rep(i, 0, n) words[w[i] - 'a']++;
    string ans = "Yes";
    rep(i, 0, 26) {
        if (words[i] % 2 != 0) {
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*

*/
