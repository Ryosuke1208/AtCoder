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
    int N, x[10], y[10];
    cin >> N;
    rep(i, 0, N) cin >> x[i] >> y[i];
    vector<int> permination(N);
    rep(i, 0, N) permination[i] = i;
    int cnt = 0;
    double total = 0;
    do {
        double tmp = 0;
        rep(i, 0, N - 1) {
            tmp += sqrt((x[permination[i]] - x[permination[i + 1]]) *
                            (x[permination[i]] - x[permination[i + 1]]) +
                        (y[permination[i]] - y[permination[i + 1]]) *
                            (y[permination[i]] - y[permination[i + 1]]));
        }
        total += tmp;
        cnt++;
    } while (next_permutation(all(permination)));
    printf("%.10lf", total / cnt);
    return;
}

/***************example_answer***************/
/*

*/
