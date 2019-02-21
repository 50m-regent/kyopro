#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<vvll> vvvll;
typedef vector<string> vstr;
typedef pair<ll, ll> pll;
typedef vector<pll> vp;
typedef map<string, ll> mstrll;
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fir first
#define sec second
#define maxs(x, y) (x = max(x, y))
#define mins(x, y) (x = min(x, y))
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(ll i = ll(a); i < ll(b); i++)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep,)(__VA_ARGS__)
#define each(i, n) for(auto&& i: n)
#define out(x) cout << x
#define print(x) cout << x << '\n'
#define debug(x) cerr << #x << ": " << x << '\n'
ll gcd(ll a, ll b){
    return b != 0 ? gcd(b, a % b) : a;
}
ll lcm(ll a, ll b){
    return a * b / gcd(a, b);
}
const ll INF = 1e16;
const ll MOD = 1e9 + 7;
ll a, b, c, n, m, z, w, ans = 0, cnt = 0, mx = 0, mn = INF;
string s, t;
vll dx = {-1, 0, 1, 0}, dy = {0, -1, 0, 1};
//vll dx = {-1, 0, 1, -1, 1, -1, 0, 1}, dy = {-1, -1, -1, 0, 0, 1, 1, 1};

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(cin >> n){
        ll x[n], y[n], h[n];
        ll g[3] = {-1, -1, -1};
    	rep(i, n){
    		cin >> x[i] >> y[i] >> h[i];
    		if(h[i] >= 1){
                g[0] = x[i], g[1] = y[i], g[2] = h[i];
            }
    	}
    	rep(i, 101){
    		rep(j, 101){
                bool flag = true;
                cnt = g[2] + abs(g[0] - i) + abs(g[1] - j);
                maxs(cnt, 0LL);
    			rep(k, n){
    				ll cnt2 = cnt - abs(x[k] - i) - abs(y[k] - j);
                    maxs(cnt2, 0LL);
    				if(h[k] != cnt2){
                        flag = false;
                        break;
                    }
    			}
    			if(flag){
                    print(i << " " << j << " " << cnt);
                    return 0;
                }
    		}
    	}
    }
}
