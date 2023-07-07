/********************tips********************/
#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i > b; i--)
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
struct Restaurant {
    string city;
    int points;
    int index;
};

bool compareRestaurants(const Restaurant &r1, const Restaurant &r2) {
    if (r1.city == r2.city) {
        return r1.points > r2.points;
    }
    return r1.city < r2.city;
}

void _main() {
    int N;
    cin >> N;

    vector<Restaurant> restaurants(N);
    for (int i = 0; i < N; i++) {
        cin >> restaurants[i].city >> restaurants[i].points;
        restaurants[i].index = i + 1;
    }

    sort(restaurants.begin(), restaurants.end(), compareRestaurants);

    for (const auto &restaurant : restaurants) {
        cout << restaurant.index << endl;
    }
    return;
}

/***************example_answer***************/
/*

*/
