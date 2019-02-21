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
const ll INF = 1e16;
const ll MOD = 1e9 + 7;
ll a, b, c, n, m, x, y, z, w, h, ans = 0, cnt = 0, mx = 0, mn = INF;
string s, t;
vll dx = {-1, 0, 1, 0}, dy = {0, -1, 0, 1};
//vll dx = {-1, 0, 1, -1, 1, -1, 0, 1}, dy = {-1, -1, -1, 0, 0, 1, 1, 1};

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(cin >> n >> m){
        ll pre[m], time[m];
        vll list[n + 1];
        rep(i, m){
            cin >> pre[i] >> time[i];
            list[pre[i]].pb(time[i]);
        }
        rep(i, 1, n + 1){
            sort(all(list[i]));
        }
        rep(i, m){
            printf("%012lld\n", pre[i] * 1000000 + lower_bound(all(list[pre[i]]), time[i]) - list[pre[i]].begin() + 1);
        }
    }
}
