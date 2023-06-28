/**********my_answer*********/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    long long color = K;
    for (int i = 1; i < N; i++)
        color *= K - 1;

    cout << color << endl;
}
