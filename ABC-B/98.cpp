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

ll a, b, c, n, m, x, y, z, w, h, ans = 0, cnt = 0, mx = 0, mn = INF;
string s;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> s;
    string left, right, tmp;
    rep(i, n - 1){
        left = s.substr(0, i + 1);
        right = s.substr(i + 1);
        cnt = 0;
        for(char j = 'a'; j <= 'z'; j++){
            if(left.find(j) != string::npos && right.find(j) != string::npos){
                cnt++;
            }
        }
        mx = max(mx, cnt);
    }
    cout << mx << endl;
}
