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

ll a, b, c, n, x, y, z, w, h, ans = 0, cnt = 0, max = 0;
string s;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<ll> list = {1, 6, 9, 36, 81, 216, 729, 1296, 6561, 7776, 46656, 59049};
    cin >> n;
    ll dp[n + 1];
    dp[0] = 0;
    rep(i, 1, n + 1){
        dp[i] = INF;
        rep(j, list.size()){
            if(i < list[j]){
                break;
            }
            dp[i] = min(dp[i], dp[i - list[j]] + 1);
        }
    }
    cout << dp[n] << endl;
}
