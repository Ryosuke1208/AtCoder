#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N;
    int a[109];
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> a[i];

    // greater<int>() は大きい順に並べるよ
    sort(a, a + N, greater<int>());

    int Alice = 0;
    int Bob = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            Alice += a[i];
        } else {
            Bob += a[i];
        }
    }
    cout << Alice - Bob << endl;
}