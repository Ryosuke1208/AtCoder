#include <iostream>
using namespace std;

int findSumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N, A, B;

    int total = 0;
    for (int n = 1; n <= N; n++) {
        int sum = findSumOfDigits(n);
        if (sum >= A && sum <= B) {
            total += n;
        }
    }

    cout << total << endl;
}