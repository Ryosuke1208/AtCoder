/**********my_answer*********/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int cnt = 0;
    for (int i = A; i < B; i++) {
        if (i >= C && i < D)
            cnt++;
    }
    cout << cnt << endl;
}

/**********example_answer*********
int main(void) {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    const int lower = max(A, C);
    const int upper = min(B, D);

    cout << max(0, upper - lower) << endl;

    return 0;
}
*/