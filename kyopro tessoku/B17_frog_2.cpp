#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int N, H[100009];
int dp[100009];
vector<int> Answer;

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> H[i];

    dp[1] = 0;
    dp[2] = abs(H[1] - H[2]);
    for (int i = 3; i <= N; i++) {
        dp[i] = min(dp[i - 1] + abs(H[i - 1] - H[i]),
                    dp[i - 2] + abs(H[i - 2] - H[i]));
    }

    int Place = N;
    while (true) {
        Answer.push_back(Place);
        if (Place == 1)
            break;
        if (dp[Place - 1] + abs(H[Place - 1] - H[Place]) == dp[Place])
            Place = Place - 1;
        else
            Place = Place - 2;
    }

    reverse(Answer.begin(), Answer.end());

    cout << Answer.size() << endl;
    for (int i = 0; i < Answer.size(); i++) {
        if (i)
            cout << " ";
        cout << Answer[i];
    }

    cout << endl;
    return 0;
}