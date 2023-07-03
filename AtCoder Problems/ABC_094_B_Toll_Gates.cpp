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
    int n, m, x, a[109];
    cin >> n >> m >> x;
    rep(i, 0, m) cin >> a[i];
    // a[i]がxの左なのか右なのかの確認だけでよかった( ´∀｀ )
    int ans1 = 0;
    rep(i, 1, x) {
        rep(j, 0, m) {
            if (i == a[j]) {
                ans1++;
                break;
            }
        }
    }
    int ans2 = 0;
    rep(i, x + 1, n) {
        rep(j, 0, m) {
            if (i == a[j]) {
                ans2++;
                break;
            }
        }
    }
    int ans = min(ans1, ans2);
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*
#include <algorithm>
#include <cstdio>
using namespace std;

int N, M, X, A[200];

int main()
{
    scanf("%d%d%d", &N, &M, &X);
    for (int i = 0; i < M; ++i) scanf("%d", A + i);

    int left = 0, right = 0;
    for (int i = 0; i < M; ++i) {
        if (A[i] < X) ++left;
        else ++right;
    }
    printf("%d\n", min(left, right));

    return 0;
}
*/