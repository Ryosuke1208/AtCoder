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
    string o, e;
    cin >> o;
    cin >> e;
    int n = o.length() + e.length();
    int idx_o = 0;
    int idx_e = 0;
    rep(i, 0, n) {
        if (i % 2 == 0) {
            cout << o[idx_o++];
        } else {
            cout << e[idx_e++];
        }
    }
    cout << endl;
    return;
}

/***************example_answer***************/
/*
#include < iostream >
using namespace std;
int main() {
    string E, O;
    cin >> E >> O;
    for (int i = 0; i < E.size(); i++) {
        cout << E[i];
        if (i < O.size())
            cout << O[i];
    }
    return 0;
}
*/
