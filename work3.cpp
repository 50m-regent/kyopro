#include <bits/stdc++.h>
using namespace std;

#define INCANT cin.tie(0), ios::sync_with_stdio(false)
#define int long long
#define double long double
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define gcd __gcd
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define sz(x) x.size()
#define all(x) (x).begin(), (x).end()
#define sortv(v) sort(all(v))
#define sortvg(v) sort(all(v), greater<int>())
#define countv(v, c) count(all(v), c)
#define _overload(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(int i = (int)(a); i < (int)(b); i++)
#define rep(...) _overload(__VA_ARGS__, repi, _rep)(__VA_ARGS__)
#define _rev(i, n) revi(i, n, 0)
#define revi(i, a, b) for(int i = (int)(a - 1); i >= (int)(b); i--)
#define rev(...) _overload(__VA_ARGS__, revi, _rev)(__VA_ARGS__)
#define each(i, n) for(auto&& i: n)
#define inv(x) each(i, x) in(i)
#define out(x) cout << (x)
#define space() cout << " "
#define indent() cout << '\n'
#define print(x) out(x), indent()
#define printv(x) each(i, x) out(i), space(); indent()
#define debug(x, ...) cerr << __LINE__ << ": " << #x << ": " << (x) << '\n'
#define YN(x) out((x) ? "YES" : "NO"), indent()
#define Yn(x) out((x) ? "Yes" : "No"), indent()
#define yn(x) out((x) ? "yes" : "no"), indent()

void in(){}
template<typename F, typename... R>
void in(F& f, R&... r){
    cin >> f, in(r...);
}

const int INF = 1e16, MOD = 1e9 + 7, LIMIT = 100001, S_LIMIT = 101;
const int dx[] = {0, 0, 1, 0, -1, -1, 1, 1, -1}, dy[] = {0, -1, 0, 1, 0, -1, -1, 1, 1};
const string alphabet = "abcdefghijklmnopqrstuvwxyz";
const string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int g[S_LIMIT][S_LIMIT] = {};

int lcm(int a, int b){
    return a / gcd(a, b) * b;
}
int modpow(int x, int n){
    return n < 2 ? x : modpow(x * x % MOD, n / 2) * (n % 2 ? x : 1) % MOD;
}
int factorial(int a){
    return a < 2 ? 1 : factorial(a - 1) * a;
}
int modfact(int a){
    return a < 2 ? 1 : factorial(a - 1) * a % MOD;
}
int summation(int a){
    return a < 1 ? 0 : (a * a + a) / 2;
}
int combination(int n, int r){
    int res = 1;
    rep(i, 1, r + 1){
        res *= n--, res /= i;
    }
    return res;
}
int modcomb(int n, int r){
    return modfact(n) * modpow(modfact(r), MOD - 2) % MOD * modpow(modfact(n - r), MOD - 2) % MOD;
}
bool isPrime(int n){
    rep(i, 2, sqrt(n) + 1){
        if(i > 3){
            i++;
        }
        if(!(n % i)){
            return false;
        }
    }
    return true;
}
void warshall(int n){
    rep(i, n){
        rep(j, n){
            rep(k, n){
                chmin(g[j][k], g[j][i] + g[i][k]);
            }
        }
    }
}
vector<int> divisor(int n){
    vector<int> ans;
    rep(i, 1, sqrt(n) + 1){
        if(!(n % i)){
            ans.pb(i);
            if(i * i < n){
                ans.pb(n / i);
            }
        }
    }
    return ans;
}
map<int, int> factorization(int n){
    map<int, int> ans;
    rep(i, 2, sqrt(n) + 1){
        if(i > 3){
            i++;
        }
        while(!(n%i)){
            ans[i]++, n /= i;
        }
    }
    if(n > 1){
        ans[n]++;
    }
    return ans;
}
struct UF{
    vector<int> t;
    UF(int size): t(size, -1){}
    int root(int x){
        return t[x] < 0 ? x : t[x] = root(t[x]);
    }
    int size(int x){
        return -t[root(x)];
    }
    bool isSame(int x, int y){
        return root(x) == root(y);
    }
    bool unite(int x, int y){
        x = root(x), y = root(y);
        if(x != y){
            if(t[y] < t[x]){
                swap(x, y)
            ;}
            t[x] += t[y], t[y] = x;
        }
        return x != y;
    }
};

int a, b, c, k, n, m, l, r, x, y, h, w, res = 0,tmp0 = 0, tmp1 = 0, sum = 0, mx = -INF, mn = INF;
string s, t;

main(){
    INCANT;
    in(n, k, s);
    vector<pair<int, int>> cnt;
    if(s[0]=='0'){
        cnt.pb(mp(0,1));
    }
    each(c, s){
        if(c == '1'){
            if(tmp0){
                cnt.pb(mp(tmp0, 0));
            }
            tmp0 = 0;
            tmp1++;
        }else{
            if(tmp1){
                cnt.pb(mp(tmp1, 1));
            }
            tmp1 = 0;
            tmp0++;
        }
    }
    if(tmp0){
        cnt.pb(mp(tmp0, 0));
    }
    if(tmp1){
        cnt.pb(mp(tmp1, 1));
    }
    if(cnt.size()%2){
        cnt.pb(mp(0,0));
    }
    vector<int> cnt2;
    rep(i, 1, cnt.size()){
        cnt2.pb(cnt[i].first+cnt[i - 1].first);
        i++;
    }
    each(i, cnt2){
        debug(i);
    }
    int tmp;
    rep(i, k + 1){
        tmp += cnt2[i];
    }
    chmax(res,tmp);
    rep(i, k + 1, cnt2.size()){
        tmp+=cnt2[i];
        tmp-=cnt2[i - k - 1];
        chmax(res, tmp);
    }
    out(res);
}
