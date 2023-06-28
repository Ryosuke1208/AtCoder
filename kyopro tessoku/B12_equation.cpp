#include <bits/stdc++.h>
using namespace std;

double f(double x) { return x * x * x + x; }

int main() {
    int N;
    cin >> N;

    double Left = 0, Right = 100, Mid;
    for (int i = 0; i < 20; i++) {
        Mid = (Left + Right) / 2.0;
        double val = f(Mid);

        if (val > 1.0 * N)
            Right = Mid;
        else
            Left = Mid;
    }

    printf("%.12lf\n", Mid);
    return 0;
}