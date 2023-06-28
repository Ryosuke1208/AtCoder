#include <bits/stdc++.h>
using namespace std;

int N, Q, A[100009], T[100009];

int search(int x) {
    int pos = lower_bound(A + 1, A + N + 1, x) - A;
    return pos;
}

int main() {
    cin >> N >> Q;
    for (int i = 1; i <= N; i++)
        cin >> A[i];
    for (int i = 1; i <= Q; i++)
        cin >> T[i];
    sort(A + 1, A + N + 1);
    for (int i = 1; i <= Q; i++) {
        cout << search(T[i]) - 1 << endl;
    }
}

/*
#include <algorithm>
#include <iostream>
using namespace std;
int N, A[100009];
int Q, X[100009];
int main() {
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> A[i];
    cin >> Q;
    for (int i = 1; i <= Q; i++)
        cin >> X[i];
    // 配列 X をソート
    sort(A + 1, A + N + 1);
    // 質問に答える
    for (int i = 1; i <= Q; i++) {
        int pos1 = lower_bound(A + 1, A + N + 1, X[i]) - A;
        cout << pos1 - 1 << endl;
    }
    return 0;
}
*/
