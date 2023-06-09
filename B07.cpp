#include <bits/stdc++.h>
using namespace std;

int T, N;
int S[100009], L[100009], R[100009];
int Answer[100009];

int main() {
    cin >> T;
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> L[i] >> R[i];

    for (int i = 0; i <= T; i++)
        S[i] = 0;
    for (int i = 1; i <= N; i++) {
        S[L[i]] += 1;
        S[R[i] + 1] -= 1;
    }

    Answer[0] = S[0];
    for (int i = 1; i <= T; i++)
        Answer[i] = Answer[i - 1] + S[i];

    for (int i = 0; i < T; i++)
        cout << Answer[i] << endl;

    return 0;
}