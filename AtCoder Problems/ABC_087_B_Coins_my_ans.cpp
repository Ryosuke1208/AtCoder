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
    int A, B, C, x;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> x;
    int ans = 0;
    rep(a, 0, A + 1) {
        rep(b, 0, B + 1) {
            int c = x - (500 * a) - (100 * b);
            if (c % 50 == 0 && c <= 50 * C && c >= 0)
                ans++;
        }
    }
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*
#include <cstdio>
using namespace std;
int A, B, C;
int X;
int solve() {
    int ans = 0;
    for (int i = 0; i <= A; ++i) {
        for (int j = 0; j <= B; ++j) {
            for (int k = 0; k <= C; ++k) {
                int tmp = i * 500 + j * 100 + k * 50;
                if (tmp == X)
                    ans++;
            }
        }
    }
    return ans;
}
int main() {
    scanf("%d%d%d%d", &A, &B, &C, &X);
    int ans = solve();
    printf("%d\n", ans);
    return 0;
}
*/