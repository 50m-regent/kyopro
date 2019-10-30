#include <bits/stdc++.h>
using namespace std;
#define INCANT cin.tie(0), cout.tie(0), ios::sync_with_stdio(false), cout << fixed << setprecision(20);
#define int long long
#define gcd __gcd
#define all(x) (x).begin(), (x).end()
template<class T>
bool chmax(T& a, T b){return (a = max(a, b)) == b;}
template<class T>
bool chmin(T& a, T b){return (a = min(a, b)) == b;}
#define _overload(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(int i = (int)(a); i < (int)(b); i++)
#define rep(...) _overload(__VA_ARGS__, repi, _rep)(__VA_ARGS__)
#define _rev(i, n) revi(i, n, 0)
#define revi(i, a, b) for(int i = (int)(a - 1); i >= (int)(b); i--)
#define rev(...) _overload(__VA_ARGS__, revi, _rev)(__VA_ARGS__)
#define each(i, n) for(auto&& i: n)
const int INF = 1e18, MOD = 1e9 + 7;
signed main() {
    INCANT;
    int n, m, s, t;
    double mn = INF, sum, mx;
    vector<int> g[666];
    double dp[666][666] = {};
    cin>>n>>m;
    rep(i, m){
        cin>>s>>t;
        s--, t--;
        g[s].push_back(t);
    }
    rep(i, n){
        dp[i][n - 1] = 0;
        rev(j, n - 1){
            sum = mx = 0.0;
            each(p, g[j]){
                sum += dp[i][p];
                chmax(mx, dp[i][p]);
            }
            dp[i][j] = sum / g[j].size() + 1;
            if(i == j && g[j].size() > 1){
                dp[i][j] = (sum - mx) / (g[j].size() - 1) + 1;
            }
        }
        chmin(mn, dp[i][0]);
    }
    cout<<mn;
}