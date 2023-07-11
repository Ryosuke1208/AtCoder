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
    int N, M;
    map<string, int> S, T;
    cin >> N;
    rep(i, 0, N) {
        string s;
        cin >> s;
        S[s]++;
    }
    cin >> M;
    rep(i, 0, M) {
        string t;
        cin >> t;
        T[t]++;
    }
    int ans = 0;
    fore(s, S) {
        if (T.find(s.first) != T.end()) // T内にある
            ans = max(ans, s.second - T[s.first]);
        else
            ans = max(ans, s.second);
    }
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*

*/
