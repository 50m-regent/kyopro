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
#define out(x) cout << (x)
#define print(x) cout << (x) << '\n'
#define debug(x) cerr << #x << ": " << (x) << '\n'
ll gcd(ll a, ll b){return b != 0 ? gcd(b, a % b) : a;}
ll lcm(ll a, ll b){return a * b / gcd(a, b);}
const ll INF = 1e16;
const ll MOD = 1e9 + 7;
ll a, b, c, d, e, f, n, m, x, y, z, w, h, mn;
string s, t;

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(cin >> a >> b >> c >> d >> e >> f){
        a *= 100, b *= 100;
        ll ans[2] = {a, 0};
        for(ll i = 0; a * i <= f; i++)
        for(ll j = 0; a * i + b * j <= f; j++)
        if(i + j){
            for(ll k = 0; a * i + b * j + k * c <= f; k++)
            for(ll l = 0; a * i + b * j + k * c + l * d <= f; l++){
                ll water[2] = {a * i + b * j, k * c + l * d};
                if((ans[0] * water[1] > ans[1] * water[0]) && (water[1] * (100 + e) <= (water[0] + water[1]) * e)){
                    ans[0] = water[0], ans[1] = water[1];
                }
            }
        }
        out(ans[0] + ans[1]), out(' '), print(ans[1]);
    }
}
