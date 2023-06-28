/**********my_answer*********/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    char S[59][59], Answer[59][59];
    cin >> H >> W;
    bool flg = false;

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> S[i][j];
        }
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (S[i][j] == '#') {
                if (i > 1) {
                    if (S[i - 1][j] == '#')
                        continue;
                }
                if (j > 1) {
                    if (S[i][j - 1] == '#')
                        continue;
                }
                if (i < H) {
                    if (S[i + 1][j] == '#')
                        continue;
                }
                if (j < W) {
                    if (S[i][j + 1] == '#')
                        continue;
                }
                flg = true;
                break;
            }
        }
        if (flg)
            break;
    }
    if (flg)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    return 0;
}

/**********example_answer*********
#include <iostream>
using namespace std;

char c[55][55];
int H, W, cnt;

int main() {
    cin >> H >> W;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++)
            cin >> c[i][j];
    }
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (c[i][j] == '#' && c[i][j - 1] != '#' && c[i - 1][j] != '#' &&
                c[i][j + 1] != '#' && c[i + 1][j] != '#')
                cnt++;
        }
    }
    if (cnt == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}

*/