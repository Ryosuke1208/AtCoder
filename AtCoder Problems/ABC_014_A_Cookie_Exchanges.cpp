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
    ll a, b, c, new_a, new_b, new_c;
    cin >> a >> b >> c;

    // 最初この二つを考慮していなかったのでWAがでた
    // 無限になるのはa=b=cかつすべて偶数
    if (a == b && b == c && c == a && a % 2 == 0 && b % 2 == 0 && c % 2 == 0) {
        cout << -1 << endl;
        return;
        // 最初から奇数の時は一回もできない
    } else if (a % 2 != 0 || b % 2 != 0 || c % 2 != 0) {
        cout << 0 << endl;
        return;
    }

    int cnt = 0;
    while (true) {
        new_a = b / 2 + c / 2;
        new_b = a / 2 + c / 2;
        new_c = a / 2 + b / 2;
        cnt++;
        if (new_a % 2 != 0 || new_b % 2 != 0 || new_c % 2 != 0)
            break;
        a = new_a;
        b = new_b;
        c = new_c;
    }
    cout << cnt << endl;
}