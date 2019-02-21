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

ll a, b, c, n, x, y, z, w, h, ans = 0, cnt = 0, mx = 0, mn = INF;
string s;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    cin >> s;
    ll e_cnt = 0, w_cnt = 0;

    rep(i, 1, n){
        if('E' == s[i]){
            e_cnt++;
        }
    }

    ans = INF;

    rep(i, n){
        cnt = e_cnt + w_cnt;
        ans = min(ans, cnt);

        if(n - 1 > i && 'E' == s[i + 1]){
            e_cnt--;
        }
        if ('W' == s[i]){
            w_cnt++;
        }
    }

    cout << ans << endl;
}
