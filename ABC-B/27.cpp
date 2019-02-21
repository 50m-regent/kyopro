#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(int i = int(a); i < int(b); i++)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep,)(__VA_ARGS__)
#define all(x) (x).begin(), (x).end()

#define INF 100000000

ll a, b, c, n, m, x, y, z, w, h, ans = 0, cnt = 0, mx = 0, mn = INF;
string s, t;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(cin >> n){
        ll list[n];
        cnt = 0;
        ans = 0;
        rep(i, n){
            cin >> list[i];
            cnt += list[i];
        }
        if(cnt % n){
            cout << -1 << endl;
            return 0;
        }
        ll left = list[0];
        rep(i, n - 1){
            if(left != cnt / n * (i + 1)){
                ans++;
            }
            left += list[i + 1];
        }
        cout << ans << endl;
    }
}
