/**********my_answer*********/
#include <bits/stdc++.h>
using namespace std;

int N;
int a[100009];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> a[i];
    bool flg = false;
    int light_pos = 1;
    int cnt = 0;
    // forでよかった
    while (true) {
        light_pos = a[light_pos];
        cnt++;
        if (light_pos == 2) {
            flg = true;
            break;
        } else if (cnt == N) {
            break;
        }
    }
    if (flg)
        cout << cnt << endl;
    else
        cout << -1 << endl;
    return 0;
}

/**********example_answer*********
int N, A[101010];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N;
    rep(i, 1, N + 1) cin >> A[i];

    int cur = 1;
    rep(i, 0, 101010) {
        cur = A[cur];
        if (cur == 2) {
            printf("%d\n", i + 1);
            return;
        }
    }
    printf("-1\n");
}

*/