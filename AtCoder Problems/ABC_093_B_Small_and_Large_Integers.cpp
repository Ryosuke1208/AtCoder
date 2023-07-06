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
    ll a, b, k;
    cin >> a >> b >> k;
    set<ll> s;
    rep(i, 0, k) {
        int num = a + i;
        if (num >= a && num <= b)
            s.insert(num);
    }
    rrep(i, k, 0) {
        int num = b - i + 1;
        if (num >= a && num <= b)
            s.insert(num);
    }
    fore(ans, s) cout << ans << endl;
    return;
}

/***************example_answer***************/
/*
int main() {
    int a, b, k;
    scanf("%d %d %d", &a, &b, &k);
    for (int i = a; i <= min(b, a + k - 1); i++)
        printf("%d\n", i);
    for (int i = max(b - k + 1, a + k); i <= b; i++)
        printf("%d\n", i);
}
*/
