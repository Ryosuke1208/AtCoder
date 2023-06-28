#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, f) for (int i = s; i < (int)f; i++)
const int inf = 1e9;

int main() {
    int N;
    cin >> N;

    int no_tax = N / 1.08;

    rep(i, no_tax - 5, no_tax + 5) {
        if ((int)(i * 1.08) == N) {
            cout << i << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
    return 0;
}