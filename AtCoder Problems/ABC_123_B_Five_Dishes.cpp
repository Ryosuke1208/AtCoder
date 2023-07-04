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
    int menu[5];
    rep(i, 0, 5) cin >> menu[i];
    int idx = 0;
    int diff = menu[0] - (menu[0] / 10) * 10;
    if (diff == 0)
        diff = 10;
    rep(i, 1, 5) {
        if (diff > menu[i] - (menu[i] / 10) * 10 &&
            menu[i] - (menu[i] / 10) * 10 != 0) {
            diff = menu[i] - (menu[i] / 10) * 10;
            idx = i;
        }
    }
    int ans = 0;
    rep(i, 0, 5) {
        if (i != idx) {
            // 間違えてチェック用のcout入れたまま提出してしまった 気を付ける
            ans += ceil(static_cast<double>(menu[i]) / 10) * 10;
        }
    }
    ans += menu[idx];
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*
// 順列を作って全探索のほうが楽ぽい
void _main() {
    int menu[5];
    rep(i, 0, 5) cin >> menu[i];
    vector<int> v;
    rep(i, 0, 5) v.push_back(i);
    int ans = inf;
    do {
        int total = 0;
        rep(i, 0, 5) {
            int vi = v[i];
            if (0 < total % 10)
                total = total - (total % 10) + 10;
            total += menu[vi];
        }
        chmin(ans, total);
    } while (next_permutation(all(v)));
    cout << ans << endl;
    return;
}
*/
