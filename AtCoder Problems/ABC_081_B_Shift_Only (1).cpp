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
    int n;
    ll a[209];
    cin >> n;
    rep(i, 0, n) cin >> a[i];
    ll cnt = 0;
    bool flg = true;
    while (true) {
        rep(i, 0, n) {
            if (a[i] % 2 != 0) {
                flg = false;
                break;
            }
            a[i] /= 2;
        }
        if (!flg)
            break;
        cnt++;
    }
    cout << cnt << endl;
    return;
}

/***************example_answer***************/
/*
#include <algorithm>
#include <cstdio>
using namespace std;

int N, A[200];

int main() {
    int dmin = 100;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        int A;
        scanf("%d", &A);
        int d = 0;
        while (A % 2 == 0) {
            A /= 2;
            ++d;
        }
        dmin = min(dmin, d);
    }
    printf("%d\n", dmin);
    return 0;
}
*/