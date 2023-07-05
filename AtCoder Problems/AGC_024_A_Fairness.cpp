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
    ll a, b, c, k;
    // long long 最大値 約9*10^18
    // unsigned long long 最大値 約18*10^18
    unsigned long long x;
    cin >> a >> b >> c >> k;
    x = abs(a - b);
    if (x > 1e18) {
        cout << "Unfair" << endl;
        return;
    }

    if (k % 2 == 0)
        cout << a - b << endl;
    else
        cout << b - a << endl;
    return;
}

/***************example_answer***************/
/*

*/
