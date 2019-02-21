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
        ll list[6] = {0};
        rep(i, s.size()){
            if(s[i] == 'A'){
                list[0]++;
            }else if(s[i] == 'B'){
                list[1]++;
            }else if(s[i] == 'C'){
                list[2]++;
            }else if(s[i] == 'D'){
                list[3]++;
            }else if(s[i] == 'E'){
                list[4]++;
            }else if(s[i] == 'F'){
                list[5]++;
            }
        }
        cout << list[0] << ' ' << list[1] << ' ' << list[2] << ' ' << list[3] << ' ' << list[4] << ' ' << list[5] << endl;
    }
}
