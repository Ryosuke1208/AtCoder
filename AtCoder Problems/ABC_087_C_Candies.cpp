/**********my_answer*********/
#include <bits/stdc++.h>
using namespace std;

int N;
int A[2][109];

int main() {
    cin >> N;
    for (int y = 0; y < 2; y++) {
        for (int x = 0; x < N; x++) {
            cin >> A[y][x];
        }
    }
    int total;
    int flg;
    int max_num = -999;
    for (int c = 0; c < N; c++) {
        total = 0;
        flg = 0;
        for (int x = 0; x < N; x++) {
            total += A[flg][x];
            if (x == c) {
                flg = 1;
                total += A[flg][x];
            }
        }
        if (total > max_num)
            max_num = total;
    }

    cout << max_num << endl;

    return 0;
}

/**********example_answer*********
 */