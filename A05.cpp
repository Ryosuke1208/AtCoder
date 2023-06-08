// Great idea
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, Answer = 0;
    cin >> N >> K;

    for (int x = 1; x <= N; x++) {
        for (int y = 1; y <= N; y++) {
            int z = K - x - y;
            if (z >= 1 && z <= N)
                Answer += 1;
        }
    }
    cout << Answer << endl;
    return 0;
}

/* Full search takes a long time
#include <bits/stdc++.h>
using namespace std;

int N, K;
int A[3009];
int cnt = 0;

int main() {
    cin >> N >> K;
    for (int x = 1; x <= K; x++)
        A[x] = x;
    for (int x = 1; x <= N; x++) {
        for (int y = 1; y <= N; y++) {
            for (int z = 1; z <= N; z++) {
                if (A[x] + A[y] + A[z] == K)
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}*/