#include <bits/stdc++.h>

// おまじない
using namespace std;
#define INCANT cin.tie(0), cout.tie(0), ios::sync_with_stdio(0), cout << fixed << setprecision(20);
#define int long long
#define gcd __gcd
#define all(x) (x).begin(), (x).end()

// 入力
template<class T> inline void scan(T &a) {cin>>a;}
inline void in() {}
template <class Head, class... Tail> inline void in(Head &head, Tail&... tail) {
    scan(head);
    in(tail...);
}

// 出力
template<class T> inline void print(const T &a) {cout<<a;}
inline void out() {putchar('\n');}
template<class T> inline void out(const T &t) {
    print(t);
    putchar('\n');
}
template<class Head, class... Tail> inline void out(const Head &head, const Tail&... tail) {
    print(head);
    putchar(' ');
    out(tail...);
}

// 定数
const int INF = 1e18;
const int MOD = 1e9 + 7;

// 最大, 最小保持
template<class T>
bool chmax(T& a, T b){return (a = max(a, b)) == b;}
template<class T>
bool chmin(T& a, T b){return (a = min(a, b)) == b;}

// bound
template<class T>
int lb(vector<T>& x,T n){return lower_bound(all(x) , n) - x.begin();}
template<class T>
int ub(vector<T>& x,T n){return upper_bound(all(x) , n) - x.begin();}

// ループ
#define _overload(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(int i = (int)(a); i < (int)(b); i++)
#define rep(...) _overload(__VA_ARGS__, repi, _rep)(__VA_ARGS__)
#define _rev(i, n) revi(i, n, 0)
#define revi(i, a, b) for(int i = (int)(a - 1); i >= (int)(b); i--)
#define rev(...) _overload(__VA_ARGS__, revi, _rev)(__VA_ARGS__)
#define each(i, n) for(auto&& i: n)

// デバッグ
#define debughead(x) cerr << "Line " << __LINE__ << ": " << #x << ": "
#define debugout(x) cerr << (x) << " "
#define debugindent() cerr << '\n'
#define debug(x) debughead(x), debugout(x), debugindent()

// LCM
#define lcm(a, b) (a / gcd(a, b) * b)

// 累乗
#define factorial(a) (a < 2 ? 1 : factorial(a - 1) * a)

// 総和
#define summation(a) (a < 1 ? 0 : (a * a + a) / 2)

// 組み合わせ
int combination(int n, int r) {
    int res = 1;
    rep(i, 1, r + 1) res *= n--, res /= i;
    return res;
}

// 素数判定
bool isPrime(int n) {
    rep(i, 2, sqrt(n) + 1) {
        if(i > 3) i++;
        if(!(n % i)) return false;
    }
    return true;
}

// 約数列挙
vector<int> divisor(int n) {
    vector<int> res;
    for (int i = 1; i < sqrt(n) + 1; i++) {
        if(!(n % i)) {
            res.push_back(i);
            if(i * i < n) res.push_back(n / i);
        }
    }
    return res;
}

// 素因数分解
map<int, int> factorization(int n) {
    map<int, int> res;
    rep(i, 2, sqrt(n) + 1) {
        if(i > 3) i++;
        while(!(n%i)) res[i]++, n /= i;
    }
    if(n > 1) res[n]++;
    return res;
}

// 拡張GCD
int extgcd(int a, int b, int &x, int &y) {
    int g = a;
    x = 1, y = 0;
    if(b) {
        g = extgcd(b, a % b, y, x);
        y -= a / b * x;
    }
    return g;
}

// UnionFind
struct UnionFind {
    vector<int> t;
    UnionFind(int size): t(size, -1) {}
    int root(int x) {return t[x] < 0 ? x : t[x] = root(t[x]);}
    int size(int x) {return -t[root(x)];}
    bool is_same(int x, int y) {return root(x) == root(y);}
    bool unite(int x, int y) {
        x = root(x), y = root(y);
        if(x != y) {
            if(t[y] < t[x]) swap(x, y);
            t[x] += t[y], t[y] = x;
        }
        return x != y;
    }
};

// セグ木
struct SegmentTree {
    int n = 1;
    vector<int> t;
    SegmentTree(vector<int> v) {
        while(n < v.size()) n *= 2;
        t.resize(2 * n - 1, INF);
        rep(i, v.size()) t[i + n - 1] = v[i];
        rev(i, n - 1) t[i] = min(t[2 * i + 1], t[2 * i + 2]); // 区間最小
    }
    void update(int x, int val) {
        x += n - 1;
        t[x] = val;
        while(x > 0){
            x--; x /= 2;
            t[x] = min(t[2 * x + 1], t[2 * x + 2]); // 区間最小
        }
    }
    int query(int a, int b, int now = 0, int l = 0, int r = -1) {
        if(r < 0) r = n;
        if(r <= a || b <= l) return INF; // minの単位元
        if(a <= l && r <= b) return t[now];
        int c1 = query(a, b, 2 * now + 1, l, (l + r) / 2);
        int c2 = query(a, b, 2 * now + 2, (l + r) / 2, r);
        return min(c1, c2);
    }
};

vector<int> fact;

void modinit(int n) {
    fact.push_back(1);
    int now = 1;
    for (int i = 1; i <= n; i++) {
        now *= i;
        now %= MOD;
        fact.push_back(now);
    }
}

int modpow(int x, int n) {
    return n < 1 ? 1 : modpow(x * x % MOD, n / 2) * (n % 2 ? x : 1) % MOD;
}

int modcomb(int n, int r) {
    if (n < r) return 0;
    return fact[n] * modpow(fact[n - r], MOD - 2) % MOD * modpow(fact[r], MOD - 2) % MOD;
}

void zalg(string s, int *z) {
    z[0] = s.size();

    int i = 1, j = 0, k;
    while (i < (int)s.size()) {
        while (i + j < (int)s.size() && s[j] == s[i + j]) j++;
        z[i] = j;
        for (k = 1; k < j && k + z[k] < j; k++) z[i + k] = z[k];
        i += k;
        j -= (j ? k : 0);
    }
}

/*
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
    int n, res = 0;
    cin>>n;
    cout<<<<endl;
}
*/

#include <bits/stdc++.h>
using namespace std;
#define INCANT cin.tie(0), cout.tie(0), ios::sync_with_stdio(0), cout << fixed << setprecision(20);
#define int long long
#define double long double
const int INF = 1e18, MOD = 1e9 + 7;

signed main() {
    
}