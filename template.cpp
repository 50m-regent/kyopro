#include <bits/stdc++.h>
using namespace std;
#define incant() cin.tie(0), ios::sync_with_stdio(false)
#define int long long
#define double long double
template <class T> using vec = vector<T>;
template <class T> using que = queue<T>;
template <class T> using pque = priority_queue<T>;
template <class... T> using tup = tuple<T...>;
using vint = vec<int>;
using vstr = vec<string>;
using pint = pair<int, int>;
using vp = vec<pint>;
using tll = tup<int, int, int>;
using vt = vec<tll>;
using mint = map<int, int>;
using dict = map<str, int>;
using qint = que<int>;
using qp = que<pint>;
using pqint = pque<int>;
using pqp = pque<pint>;
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define sz(x) x.size()
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define ms(v, x) memset(v, x, sizeof(v))
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(int i = (int)(a); i < (int)(b); i++)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep,)(__VA_ARGS__)
#define _rev(i, n) revi(i, n, 0)
#define revi(i, a, b) for(int i = (int)(a - 1); i >= (int)(b); i--)
#define rev(...) _overload3(__VA_ARGS__, revi, _rev,)(__VA_ARGS__)
#define each(i, n) for(auto&& i: n)
#define out(x) cout << (x)
#define space() cout << " "
#define indent() cout << '\n'
#define print(x) out(x), indent()
#define debug(x) cerr << __LINE__ << ": " << #x << ": " << (x) << '\n'
#define YN(x) print((x) ? "YES" : "NO")
#define Yn(x) print((x) ? "Yes" : "No")
#define yn(x) print((x) ? "yes" : "no")
#define POS(x) print((x) ? "POSSIBLE" : "IMPOSSIBLE")
#define Pos(x) print((x) ? "Possible" : "Impossible")
#define pos(x) print((x) ? "possible" : "impossible")
const int INF = LLONG_MAX - INT_MAX, MOD = 1e9 + 7, LIMIT = 100001;
const int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};
// const int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1}, dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const double EPS = 1e-9;
const string alphabet = "abcdefghijklmnopqrstuvwxyz";

int gcd(int a, int b){return b == 0 ? a : gcd(b, a % b);}
int lcm(int a, int b){return a / gcd(a, b) * b;}
int factorial(int a){return a < 2 ? 1 : factorial(a - 1) * a;}
int summation(int a){return a < 1 ? 0 : (a * a + a) / 2;}
int combination(int n, int r){int res = 1; rep(i, 1, r + 1) res *= n--, res /= i; return res;}

struct UnionFind{
    vint data;
    UnionFind(int size) : data(size, -1){}
    void unite(int x, int y){
        x = root(x); y = root(y);
        if (x != y) {
            if (data[y] < data[x]) swap(x, y);
            data[x] += data[y]; data[y] = x;
        }
    }
    bool find(int x, int y){
        return root(x) == root(y);
    }
    int root(int x){
        return data[x] < 0 ? x : data[x] = root(data[x]);
    }
    int size(int x){
        return -data[root(x)];
    }
};

int a, b, c, k, n, m, x, y, z, w, h, res = 0, cnt = 0, sum = 0, mx = -INF, mn = INF;
str s, t;
bool flag = true;

signed main(){
    incant();
    cin >> ;

    print();
}
