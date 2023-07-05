/********************tips********************/
#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#define all(x) (x).begin(), (x).end()
using namespace std;
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
int main() {
    // 自分で作ったやつとユーザーが作った奴どっちもWAになってしまい、
    // 公式の解答でやっとAC なんでかはわからない
    int N, M;
    cin >> N >> M;
    vector<int> cnt(M, 0);
    for (int i = 0; i < N; ++i) {
        int K;
        cin >> K;
        for (int j = 0; j < K; ++j) {
            int A;
            cin >> A;
            --A;
            ++cnt[A];
        }
    }
    int ans = 0;
    for (int i = 0; i < M; ++i) {
        if (cnt[i] == N) {
            ++ans;
        }
    }
    cout << ans << endl;
}

/***************example_answer***************/
/*

*/
