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

    cin >> h >> w;
    char panel[h][w];
    ll vector_x[] = {0, 1, 0, -1}, vector_y[] = {-1, 0, 1, 0};
    rep(i, h){
        rep(j, w){
            cin >> panel[i][j];
        }
    }
    rep(i, h){
        rep(j, w){
            if(panel[i][j] == '#'){
                ll flag = 1;
                rep(k, 4){
                    if(panel[i + vector_y[k]][j + vector_x[k]] == '#'){
                        flag = 0;
                        break;
                    }
                }
                if(flag){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
}
