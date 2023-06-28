/**********my_answer*********/
#include <bits/stdc++.h>
using namespace std;

string S;

int main() {
    cin >> S;

    for (int i = 0; i < (1 << 3); i++) {
        int sum = S[0] - '0';
        for (int j = 0; j < 3; j++) {
            if (i & (1 << j))
                sum += S[j + 1] - '0';
            else
                sum -= S[j + 1] - '0';
        }
        if (sum == 7) {
            cout << S[0];
            for (int j = 0; j < 3; j++) {
                if (i & (1 << j))
                    cout << "+";
                else
                    cout << "-";
                cout << S[j + 1];
            }
            cout << "=7" << endl;
            return 0;
        }
    }
}

/**********example_answer*********
string S;
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> S;

    rep(msk, 0, 1 << 3) {
        int sm = S[0] - '0';
        rep(i, 0, 3) {
            if (msk & (1 << i)) sm += S[i + 1] - '0';
            else sm -= S[i + 1] - '0';
        }
        if (sm == 7) {
            cout << S[0];
            rep(i, 0, 3) {
                if (msk & (1 << i)) cout << "+";
                else cout << "-";
                cout << S[i + 1];
            }
            cout << "=7" << endl;
            return;
        }
    }
}
 */