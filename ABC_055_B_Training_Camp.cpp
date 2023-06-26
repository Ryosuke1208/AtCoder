/**********my_answer*********/
#include <iostream>
using namespace std;

long long calc_power(int num) {
    long long power = 1;
    for (int i = 1; i <= num; i++) {
        power = power * i % 1000000007;
    }
    return power;
}

int main() {
    int N;
    cin >> N;

    cout << calc_power(N) << endl;
}