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
    // llじゃなくてintで何回も提出してWA
    // 出力値がllになることがあるので、llで定義すべき
    ll v[3];
    cin >> v[0] >> v[1] >> v[2];
    int even = 0;
    sort(v, v + 3);
    rep(i, 0, 3) {
        if (v[i] % 2 == 0)
            even++;
    }
    if (even)
        cout << 0 << endl;
    else
        cout << v[0] * v[1] << endl;
    return;
}

/***************example_answer***************/
/*

*/
