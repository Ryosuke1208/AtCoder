#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    bool answer = false;
    for (int i = A; i <= B; i++) {
        if (100 % i)
            answer = true;
    }
    if (answer == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}