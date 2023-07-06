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
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    rep(num, 1, n + 1) {
        int tmp = num;
        int digit_sum = 0;
        while (tmp > 0) {
            int digit = tmp % 10;
            digit_sum += digit;
            tmp /= 10;
        }
        if (digit_sum >= a && digit_sum <= b)
            sum += num;
    }
    cout << sum << endl;
    return;
}

/***************example_answer***************/
/*

*/
