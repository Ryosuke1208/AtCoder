// p133 理解できない

#include <bits/stdc++.h>
using namespace std;

int N, P[2009], A[2009];
int dp[2009][2009];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> P[i] >> A[i];

    dp[1][N] = 0;
    for (int LEN = N - 2; LEN >= 0; LEN--) {
        for (int l = 1; l <= N - LEN; l++) {
            int r = l + LEN;

            int score1 = 0;
            if (l <= P[l - 1] && P[l - 1] <= r)
                score1 = A[l - 1];

            int score2 = 0;
            if (l <= P[r + 1] && P[r + 1] <= r)
                score2 = A[r + 1];

            if (l == 1) {
                dp[l][r] = dp[l][r + 1] + score2;
            } else if (r == N) {
                dp[l][r] = dp[l - 1][r] + score1;
            } else {
                dp[l][r] = max(dp[l - 1][r] + score1, dp[l][r + 1] + score2);
            }
        }
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    int Answer = 0;
    for (int i = 1; i <= N; i++)
        Answer = max(Answer, dp[i][i]);
    cout << Answer << endl;
    return 0;
}