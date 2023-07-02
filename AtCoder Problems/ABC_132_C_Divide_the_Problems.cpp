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
    // 入力値をソートして、n/2 -
    // 1個目とn/2個目の数の間を見れば答えが取りえる範囲がわかる。
    int n, d[100009];
    cin >> n;
    rep(i, 0, n) cin >> d[i];
    sort(d, d + n);
    int a = d[n / 2 - 1];
    int b = d[n / 2];
    cout << b - a << endl;
    /*
    処理に時間がかかりすぎておりダメダメ
    int n, d[100009];
    cin >> n;
    rep(i, 0, n) cin >> d[i];
    sort(d,d+n);
    int answer = 0;
    rep(j, 1, d[n-1]+1) {
        int cnt = 0;
        rep(i, 0, n) {
            if (d[i] >= j)
                cnt++;
            if (cnt > n / 2)
                break;
        }
        if (cnt == n / 2)
            answer++;
    }
    cout << answer << endl;
    */
}