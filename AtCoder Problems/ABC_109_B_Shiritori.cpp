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
    int n;
    vector<string> v;
    rep(i, 0, n) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    string ans = "Yes";
    rep(i, 1, n) {
        int len = v[0].length();
        if (v[i][0] != v[i - 1][len - 1]) {
            ans = "No";
            break;
        }
        int cnt = 0;
        rep(j, 0, n) {
            if (v[i] == v[j])
                cnt++;
            if (cnt >= 2)
                break;
        }
        if (cnt >= 2) {
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*
int N;
string S[101];
//---------------------------------------------------------------------------------------------------
#define yes "Yes"
#define no "No"
string solve() {
    set<string> s;
    s.insert(S[0]);

    rep(i, 1, N) {
        if (S[i - 1].back() != S[i][0])
            return no;
        if (s.count(S[i]))
            return no;

        s.insert(S[i]);
    }

    return yes;
}
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N;
    rep(i, 0, N) cin >> S[i];
    cout << solve() << endl;
}
*/