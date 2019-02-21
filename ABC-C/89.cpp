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

ll b, n, x, y, z, w, ans = 0, cnt = 0, mx = 0, mn = INF;
string s;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    ll m = 0, a = 0, r = 0, c = 0, h = 0;
    rep(i, n){
        cin >> s;
        if(s[0] == 'M'){
            m++;
        }else if(s[0] == 'A'){
            a++;
        }else if(s[0] == 'R'){
            r++;
        }else if(s[0] == 'C'){
            c++;
        }else if(s[0] == 'H'){
            h++;
        }
    }
    ll d[5];
    d[0] = m, d[1] = a, d[2] = r, d[3] = c, d[4] = h;
    rep(i, 3){
        rep(j, i + 1, 4){
            rep(k, j + 1, 5){
                ans += d[i] * d[j] * d[k];
            }
        }
    }
    cout << ans << endl;
}
