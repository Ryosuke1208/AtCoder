#include <bits/stdc++.h>
using namespace std;

int N, X, A[100009];

int search(int x) {
    int L = 1, R = N;
    while (L <= R) {
        int M = (L + R) / 2;
        if (x < A[M])
            R = M - 1;
        if (x == A[M])
            return M;
        if (x > A[M])
            L = M + 1;
    }
    return -1;
}

/*
int search(int x) {
    int pos = lower_bound(A + 1, A + N + 1, x) - A;
    if (pos <= N && A[pos] == x)
        return pos;
    return -1;
}
*/

int main() {
    cin >> N >> X;
    for (int i = 1; i <= N; i++)
        cin >> A[i];

    int Answer = search(X);
    cout << Answer << endl;
    return 0;
}

/*
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N, A[100009];
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> A[i];
    sort(A + 1, A + N + 1);
    for (int i = 1; i <= N; i++)
        cout << A[i] << endl;
    return 0;
}
*/