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

#define const INF 10000000000

ll a, b, c, n, x, y, z, w, h, ans = 0, cnt = 0, max = 0;
string s;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    if(n < 105){
        cout << 0 << endl;
    }else{
        rep(i, 104, n){
            i++;
            cnt = 2;
            rep(j, 2, i / 3 + 1){
                j++;
                if(i % j == 0){
                    cnt++;
                }
            }
            if(cnt == 8){
                ans++;
            }
        }
        cout << ans << endl;
    }
}
