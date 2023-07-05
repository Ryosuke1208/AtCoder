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
    cin >> n;
    vector<unsigned long long> v;
    v.push_back(2);
    v.push_back(1);
    if (n >= 2) {
        rep(i, 2, n + 1) v.push_back(v[i - 2] + v[i - 1]);
    }
    cout << v[n] << endl;
    return;
}

/***************example_answer***************/
/*
typedef long long ll;
int N;
ll L[87];
int main() {
    scanf("% d ", &N);
    L[0] = 2LL, L[1] = 1LL;
    for (int i = 2; i <= N; i++)
        L[i] = L[i - 2] + L[i - 1];
    printf("% lld\n ", L[N]);
}
*/
