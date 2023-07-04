/********************tips********************/
#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#define all(x) (x).begin(), (x).end()
using namespace std;
void _main();
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    _main();
}
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;
template <class T> bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T> bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}
/********************************************/

/********************code********************/
void _main() {
    string s;
    cin >> s;
    int n = s.length();
    int c[26];
    rep(i, 0, 26) c[i] = 0;
    rep(i, 0, n) c[s[i] - 'a']++;
    rep(i, 0, 26) {
        if (c[i] == 0) {
            char ans = i + 'a';
            cout << ans << endl;
            return;
        }
    }
    cout << "None" << endl;
    return;
}

/***************example_answer***************/
/*
#include <cstdio>

char S[101010];

int main() {
    scanf("%s", S);

    bool app[26];
    for (int i = 0; i < 26; ++i) {
        app[i] = false;
    }
    for (int i = 0; S[i] != '\0'; ++i) {
        app[S[i] - 'a'] = true;
    }
    for (int i = 0; i < 26; ++i) {
        if (!app[i]) {
            printf("%c\n", (char)(i + 'a'));
            return 0;
        }
    }
    puts("None");
    return 0;
}
*/
