#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a * b % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
}

// a 人を b 人ずつグループに分けると何グループできるか？
// (a + b - 1) / b
// 余りの切り上げは分母の-1を分子に足して割ればいい