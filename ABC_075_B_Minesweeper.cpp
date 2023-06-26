/**********my_answer*********/
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    int H, W;
    char S[59][59], Answer[59][59];
    cin >> H >> W;

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> S[i][j];
        }
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            int cnt = 0;
            if (S[i][j] == '#')
                Answer[i][j] = '#';
            else {
                if (i > 1) {
                    if (S[i - 1][j] == '#')
                        cnt++;
                }
                if (j > 1) {
                    if (S[i][j - 1] == '#')
                        cnt++;
                }
                if (i < H) {
                    if (S[i + 1][j] == '#')
                        cnt++;
                }
                if (j < W) {
                    if (S[i][j + 1] == '#')
                        cnt++;
                }
                if (i > 1 && j > 1) {
                    if (S[i - 1][j - 1] == '#')
                        cnt++;
                }
                if (i > 1 && j < W) {
                    if (S[i - 1][j + 1] == '#')
                        cnt++;
                }
                if (i < H && j > 1) {
                    if (S[i + 1][j - 1] == '#')
                        cnt++;
                }
                if (i < H && j < W) {
                    if (S[i + 1][j + 1] == '#')
                        cnt++;
                }
                Answer[i][j] = char(cnt + '0');
            }
        }
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cout << Answer[i][j];
        }
        cout << endl;
    }

    return 0;
}

/**********example_answer*********
#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#pragma GCC optimize ("-O3")
using namespace std; void _main(); int main() { cin.tie(0);
ios::sync_with_stdio(false); _main(); }

int H, W;
string B[101];

void _main() {
    cin >> H >> W;
    rep(y, 0, H) cin >> B[y];

    rep(y, 0, H) rep(x, 0, W) if (B[y][x] == '.') {
        int c = 0;
        rep(dx, -1, 2) rep(dy, -1, 2) {
            if (dx == 0 and dy == 0)
                continue;
            int xx = x + dx;
            int yy = y + dy;
            if (0 <= xx and xx < W and 0 <= yy and yy < H) {
                if (B[yy][xx] == '#')
                    c++;
            }
        }
        B[y][x] = char('0' + c);
    }

    rep(y, 0, H) cout << B[y] << endl;
}
*/