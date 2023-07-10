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
    int N, H[100009];
    cin >> N;
    rep(i, 0, N) cin >> H[i];
    // 単調非減少は=も含む増加関数のこと
    // 最初初めから見ていくように作ってWA 後ろから見ていく
    rrep(i, N - 2, 0) {
        if (H[i] > H[i + 1] + 1) {
            cout << "No" << endl;
            return;
        } else if (H[i] == H[i + 1] + 1)
            H[i]--;
    }
    cout << "Yes" << endl;
    return;
}

/***************example_answer***************/
/*

*/
