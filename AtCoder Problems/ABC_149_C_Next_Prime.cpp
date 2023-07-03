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
vector<int> Eratosthenes(int N) {
    // make table
    vector<bool> isprime(N + 1, true);
    // 0 1 is not prime num
    isprime[0] = isprime[1] = false;
    for (int p = 2; p <= N; p++) {
        if (!isprime[p])
            continue;
        for (int q = p * 2; q <= N; q += p) {
            isprime[q] = false;
        }
    }
    vector<int> p_num;
    for (int p = 2; p <= N; p++) {
        if (isprime[p])
            p_num.push_back(p);
    }
    // return 2 ~ N prime number
    return p_num;
}

void _main() {
    int x;
    cin >> x;
    vector<int> p_num = Eratosthenes(1000000);

    int ans = *lower_bound(all(p_num), x);
    cout << ans << endl;
    return;
}

/***************example_answer***************/
/*

*/