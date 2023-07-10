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
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    int price = inf;
    // そのままかう
    int tmp = A * X + B * Y;
    price = min(tmp, price);
    // 多い方分ABを買う
    int ab = max(X, Y);
    tmp = ab * C;
    price = min(tmp, price);
    // 少ないほう分ABをかって残りを単品
    if (X < Y) {
        tmp = X * C + (Y - X) * B;
    } else if (X > Y) {
        tmp = Y * C + (X - Y) * A;
    } else {
        tmp = X * C;
    }
    price = min(tmp, price);
    cout << price << endl;

    return;
}

/***************example_answer***************/
/*
ll A, B, C, X, Y;
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> A >> B >> C >> X >> Y;

    ll ans = infl;
    rep(ab, 0, 201010) {
        ll sm = C * ab;

        ll x = X - ab / 2;
        ll y = Y - ab / 2;

        if (0 < x) sm += x * A;
        if (0 < y) sm += y * B;

        chmin(ans, sm);
    }

    cout << ans << endl;
}
*/
