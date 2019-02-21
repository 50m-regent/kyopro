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

#define inf 10000000000

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, t, a, h, ans;
    double ans_d;
    cin >> n >> t >> a;
    rep(i, n){
        cin >> h;
        double degree = abs(t - h * 0.006 - a);
        if(i == 0){
            ans = 0;
            ans_d = degree;
        }else{
            if(degree < ans_d){
                ans = i;
                ans_d = degree;
            }
        }

    }
    cout << ans + 1 << endl;
}
