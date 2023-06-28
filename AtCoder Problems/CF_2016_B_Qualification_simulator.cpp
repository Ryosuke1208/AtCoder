#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, f) for (int i = s; i < (int)f; i++)
const int inf = 1e9;

int main() {
    int N, A, B;
    string S;

    cin >> N >> A >> B;
    cin >> S;

    int cnt = 0;
    int rank = 1;
    rep(i, 0, N) {
        if (S[i] == 'c')
            cout << "No" << endl;
        else if (S[i] == 'a' && cnt < A + B) {
            cout << "Yes" << endl;
            cnt++;
        } else if (S[i] == 'b' && cnt < A + B && rank <= B) {
            cout << "Yes" << endl;
            cnt++;
            rank++;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}