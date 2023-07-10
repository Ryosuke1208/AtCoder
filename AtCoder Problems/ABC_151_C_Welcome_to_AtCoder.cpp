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
    bool isSolved[100009];
    int WA[100009];

    cin >> N >> M;
    rep(i, 0, 100009) {
        isSolved[i] = false;
        WA[i] = 0;
    }
    rep(i, 0, M) {
        int p;
        string s;
        cin >> p >> s;
        // 入力の段階で結果を格納していく
        if (s == "WA" && !isSolved[p])
            WA[p]++;
        if (s == "AC")
            isSolved[p] = true;
    }

    int cor = 0, pena = 0;
    rep(i, 1, N + 1) {
        if (isSolved[i]) {
            cor++;
            pena += WA[i];
        }
    }
    cout << cor << " " << pena << endl;
    return;
}

/***************example_answer***************/
/*

*/
