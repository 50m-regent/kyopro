#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(int i = int(a); i < int(b); i++)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep,)(__VA_ARGS__)
#define all(x) (x).begin(), (x).end()
#define INF 10000000000
ll a, b, c, n, m, x, y, z, w, h, ans = 0, cnt = 0, mx = 0, mn = INF;
string s, t;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(cin >> s){
        map<char, ll> list;
        rep(i, s.size()){
            list[s[i]]++;
        }
        rep(i, s.size()){
            if(list[s[i]] % 2){
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    }
}
