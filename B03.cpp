#include <bits/stdc++.h>
using namespace std;

int N;
int A[109];
bool answer = false;

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> A[i];

    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            for (int k = j + 1; k <= N; k++) {
                if (A[i] + A[j] + A[k] == 1000)
                    answer = true;
            }
        }
    }
    if (answer == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}