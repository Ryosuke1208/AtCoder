#include <bits/stdc++.h>
using namespace std;

int N, K, A[1009], B[1009], C[1009], D[1009];
int P[100009], Q[100009];

int main() {
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
        cin >> A[i];
    for (int i = 1; i <= N; i++)
        cin >> B[i];
    for (int i = 1; i <= N; i++)
        cin >> C[i];
    for (int i = 1; i <= N; i++)
        cin >> D[i];

    // make P (all sum A + B)
    for (int x = 1; x <= N; x++) {
        for (int y = 1; y <= N; y++) {
            P[(x - 1) * N + y] = A[x] + B[y];
        }
    }

    // make Q (all sum C + D)
    for (int x = 1; x <= N; x++) {
        for (int y = 1; y <= N; y++) {
            Q[(x - 1) * N + y] = C[x] + D[y];
        }
    }

    sort(Q + 1, Q + (N * N) + 1);
    for (int i = 1; i <= N * N; i++) {
        // find min_num Q[i] >= K - P[i]
        int pos1 = lower_bound(Q + 1, Q + (N * N) + 1, K - P[i]) - Q;
        if (pos1 <= N * N && Q[pos1] == K - P[i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}