/**********my_answer*********/
#include <bits/stdc++.h>
using namespace std;

int N;
char S[300009];
int LEFT[300009], RIGHT[300009];
int cnt;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> S[i];

    cnt = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'W')
            cnt++;
        LEFT[i] = cnt;
    }
    cnt = 0;
    for (int i = N - 1; i >= 0; i--) {
        if (S[i] == 'E')
            cnt++;
        RIGHT[i] = cnt;
    }
    int min_cnt = 999999;
    for (int pos = 0; pos < N; pos++) {
        cnt = 0;
        if (pos == 0) {
            cnt = RIGHT[1];
        } else if (pos == N - 1) {
            cnt = LEFT[N - 2];
        } else {
            cnt = LEFT[pos - 1] + RIGHT[pos + 1];
        }
        if (cnt < min_cnt)
            min_cnt = cnt;
    }
    cout << min_cnt << endl;
    return 0;
}

/**********example_answer*********
int N; string S;
int E[301010], W[301010];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N >> S;

    rep(i, 0, N) {
        if (S[i] == 'E') E[i] = 1;
        else W[i] = 1;
    }

    rep(i, 1, N) {
        W[i] += W[i - 1];
        E[i] += E[i - 1];
    }

    int ans = inf;
    rep(i, 0, N) {
        int sm = 0;
        if (i) sm += W[i - 1];
        sm += E[N - 1] - E[i];
        chmin(ans, sm);
    }
    cout << ans << endl;
}
 */