#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, f) for (int i = s; i < (int)f; i++)
const int inf = 1e9;

int main() {
    int N, M, C;
    cin >> N >> M >> C;
    int B[29], A[29][29];
    rep(i, 0, M) cin >> B[i];
    rep(i, 0, N) { rep(j, 0, M) cin >> A[i][j]; }
    int cnt = 0;
    rep(i, 0, N) {
        int total = 0;
        rep(j, 0, M) total += B[j] * A[i][j];
        total += C;
        if (total > 0)
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}