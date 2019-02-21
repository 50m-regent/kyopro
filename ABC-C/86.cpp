#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <array>
#include <tuple>
#include <random>

using namespace std;
typedef long long int ll;

#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(int i = int(a); i < int(b); i++)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep,)(__VA_ARGS__)
#define all(x) (x).begin(), (x).end()

#define INF 10000000000

ll a, b, c, n, z, w, h, ans = 0, cnt = 0, mx = 0, mn = INF;
string s;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    ll t[n + 1], x[n + 1], y[n + 1];
    t[0] = 0, x[0] = 0, y[0] = 0;
    rep(i, 1, n + 1){
        cin >> t[i] >> x[i] >> y[i];
    }
    rep(i, 1, n + 1){
        ll delta_t = t[i] - t[i - 1], dist = abs(x[i] - x[i - 1]) + abs(y[i] - y[i - 1]);
        if(dist > delta_t || dist % 2 != delta_t % 2){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}
