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
    int n, h[100009];
    cin >> n;
    rep(i, 0, n) cin >> h[i];
    int ans = 0;
    rep(i, 0, n) {
        int pos = i;
        int cnt = 0;
        rep(j, pos, n - 1) {
            if (h[j] < h[j + 1])
                break;
            cnt++;
        }
        // ただの全探索だとTLEしたため、探索済みの箇所はもう探索しなくていいように
        // idxを動かしてあげた
        i += cnt;
        chmax(ans, cnt);
    }
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*

*/
