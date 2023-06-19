#include <bits/stdc++.h>
using namespace std;

int N, Q;
int A[10009], OK[10009], NG[10009];
int L[10009], R[10009];

int main() {
    cin >> N >> Q;
    for (int i = 1; i <= N; i++)
        cin >> A[i];
    for (int i = 1; i <= Q; i++)
        cin >> L[i] >> R[i];

    OK[0] = 0;
    NG[0] = 0;
    for (int i = 1; i <= N; i++) {
        OK[i] = OK[i - 1];
        NG[i] = NG[i - 1];
        if (A[i] == 1)
            OK[i] += 1;
        else
            NG[i] += 1;
    }

    for (int i = 1; i <= Q; i++) {
        if (OK[R[i]] - OK[L[i] - 1] > NG[R[i]] - NG[L[i] - 1])
            cout << "win" << endl;
        else if (OK[R[i]] - OK[L[i] - 1] < NG[R[i]] - NG[L[i] - 1])
            cout << "lose" << endl;
        else
            cout << "draw" << endl;
    }

    return 0;
}