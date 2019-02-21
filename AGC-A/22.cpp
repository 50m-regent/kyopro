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

ll a, b, n, m, x, y, z, w, h, ans = 0, cnt = 0, mx = 0, mn = INF;
string s;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> s;
    char tmp = 'a';
    if(s.size() < 26){
        while(s.find(tmp) != string::npos){
            tmp++;
        }
        cout << s << tmp << endl;
    }else{
        rep(i, 25){
            if(s[24 - i] < s[24 - i + 1]){
                char c = s[24 - i + 1];
                rep(j, 24 - i + 1, 26){
                    if(s[j] > s[24 - i]){
                        c = min(c, s[j]);
                    }
                }
                cout << s.substr(0, 24 - i) << c << endl;
                return 0;
          }
      }
      cout << -1 << endl;
    }
}




abcdefghijklmnopqrstuvwxzy
