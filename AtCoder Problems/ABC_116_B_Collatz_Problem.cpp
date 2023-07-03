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
    int s;
    cin >> s;

    set<int> a;
    a.insert(s);
    int cur = s;

    rep(i, 2, 1000009) {
        int next;
        if (cur % 2 == 0)
            next = cur / 2;
        else
            next = 3 * cur + 1;
        if (a.count(next)) {
            cout << i << endl;
            return;
        }
        a.insert(next);
        cur = next;
    }
    return;
}

/***************example_answer***************/
/*

*/