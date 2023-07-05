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
    int a, b, num[5];
    int ans = 0;
    cin >> a >> b;
    rep(n, a, b + 1) {
        // for文で処理したらTAしてた
        num[0] = n / 10000 % 10;
        num[1] = n / 1000 % 10;
        num[3] = n / 10 % 10;
        num[4] = n % 10;

        if (num[0] == num[4] && num[1] == num[3])
            ans++;
    }
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*

*/
