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
    int N = S.length();
    int ans = 0;
    for (int i = N - 2; i >= 0; i -= 2) {
        string s1 = S.substr(0, i / 2);
        string s2 = S.substr(i / 2, i / 2);
        if (s1 == s2) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*

*/
