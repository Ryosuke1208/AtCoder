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
    int N, A[109];
    cin >> N;
    rep(i, 0, N) cin >> A[i];
    int even = 0, odd = 0;
    rep(i, 0, N) {
        if (A[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    if (even == 0)
        cout << pow(3, N) - 1 << endl;
    else
        cout << pow(3, N) - pow(2, even) << endl;
    return;
}

/***************example_answer***************/
/*

*/
