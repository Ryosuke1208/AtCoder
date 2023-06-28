#include <bits/stdc++.h>
using namespace std;

int H, W, N;
int A[100009], B[100009], C[100009], D[100009];
int X[1509][1509], Z[1509][1509];

// O(HW + N)
int main() {
    // input
    cin >> H >> W >> N;
    for (int t = 1; t <= N; t++)
        cin >> A[t] >> B[t] >> C[t] >> D[t];
    // add
    for (int t = 1; t <= N; t++) {
        X[A[t]][B[t]] += 1;
        X[A[t]][D[t] + 1] += -1;
        X[C[t] + 1][B[t]] += -1;
        X[C[t] + 1][D[t] + 1] += 1;
    }
    // init Z
    for (int i = 0; i <= H; i++) {
        for (int j = 0; j <= W; j++)
            Z[i][j] = 0;
    }
    // row
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++)
            Z[i][j] = Z[i][j - 1] + X[i][j];
    }
    // colomun
    for (int j = 1; j <= W; j++) {
        for (int i = 1; i <= H; i++)
            Z[i][j] = Z[i - 1][j] + Z[i][j];
    }

    // output
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (j >= 2)
                cout << " ";
            cout << Z[i][j];
        }
        cout << endl;
    }
    return 0;
}