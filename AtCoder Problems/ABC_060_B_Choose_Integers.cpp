/**********my_answer*********/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    bool flg = false;
    for (int i = 1; i <= 100; i++) {
        if ((A * i) % B == C) {
            flg = true;
            break;
        }
    }
    if (flg)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

/**********example_answer*********
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int A, B, C;
string sol() {
    rep(i, 1, 101) if ((A * i) % B == C) return "YES";
    return "NO";
}
//-----------------------------------------------------------------------------------
int main() {
    cin >> A >> B >> C;
    cout << sol() << endl;
}
*/