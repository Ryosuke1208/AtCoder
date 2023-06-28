#include <bits/stdc++.h>
using namespace std;

int N, Q;
int A[10009], S[10009];
int L[10009], R[10009];

int main() {
    cin >> N >> Q;
    for (int i = 1; i <= N; i++)
        cin >> A[i];
    for (int i = 1; i <= Q; i++)
        cin >> L[i] >> R[i];
    // S[0] = 0 is more better
    S[1] = A[1];
    for (int i = 2; i <= N; i++)
        S[i] = S[i - 1] + A[i];

    for (int i = 1; i <= Q; i++)
        cout << S[R[i]] - S[L[i] - 1] << endl;

    return 0;
}