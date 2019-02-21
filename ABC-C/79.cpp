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

ll a, b, c, d, n, m, x, y, z, w, h, ans = 0, cnt = 0, mx = 0, mn = INF;
string s;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> x;
    a = x / 1000;
    b = x % 1000 / 100;
    c = x % 100 / 10;
    d = x % 10;
    if(a + b + c + d == 7){
        cout << a << '+' << b << '+' << c << '+' << d << '=' << 7 << endl;
    }else if(a + b + c - d == 7){
        cout << a << '+' << b << '+' << c << '-' << d << '=' << 7 << endl;
    }else if(a + b - c + d == 7){
        cout << a << '+' << b << '-' << c << '+' << d << '=' << 7 << endl;
    }else if(a + b - c - d == 7){
        cout << a << '+' << b << '-' << c << '-' << d << '=' << 7 << endl;
    }else if(a - b + c + d == 7){
        cout << a << '-' << b << '+' << c << '+' << d << '=' << 7 << endl;
    }else if(a - b + c - d == 7){
        cout << a << '-' << b << '+' << c << '-' << d << '=' << 7 << endl;
    }else if(a - b - c + d == 7){
        cout << a << '-' << b << '-' << c << '+' << d << '=' << 7 << endl;
    }else{
        cout << a << '-' << b << '-' << c << '-' << d << '=' << 7 << endl;
    }
}
