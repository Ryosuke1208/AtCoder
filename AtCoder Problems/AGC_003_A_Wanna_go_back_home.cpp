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
    int s[4];
    int n = S.length();
    rep(i, 0, 4) s[i] = 0;
    rep(i, 0, n) {
        if (S[i] == 'N')
            s[0]++;
        else if (S[i] == 'W')
            s[1]++;
        else if (S[i] == 'S')
            s[2]++;
        else if (S[i] == 'E')
            s[3]++;
    }
    string ans = "Yes";
    if ((s[0] > 0 && s[2] <= 0) || (s[0] <= 0 && s[2] > 0) ||
        (s[1] > 0 && s[3] <= 0) || (s[1] <= 0 && s[3] > 0))
        ans = "No";
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*

*/
