/**********my_answer*********/
#include <bits/stdc++.h>
using namespace std;

long long f(long long n, long long x) {
    if (n == -1)
        return 0;
    else
        return n / (x + 1);
}

int main() {
    long long a, b, x;
    cin >> a >> b >> x;

    cout << f(b, x) - f(a - 1, x) << endl;
    return 0;
}

/*
a 以上 b 以下の整数のうち条件を満たすものの個数を求める問題です．
このような問題では，
f(n) := 0 以上 n 以下の整数のうち条件を満たすものの個数
と定義しておくと，答えは f(b) − f(a − 1) で求まるので楽です．
ただし，a = 0 のときに f(−1) が呼ばれることに注意してください．
このことに注意すると，f は次のように書けます．
f(n) = {
    n/x + 1 (n ≥ 0)
    0 (n = −1)
}
ただし，/ は切り捨ての除算です．
*/
