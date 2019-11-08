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
struct UnionFind {
    vector<int> t;
    UnionFind(int size): t(size, -1) {}
    int root(int x) {
        return t[x] < 0 ? x : t[x] = root(t[x]);
    }
    int size(int x) {
        return -t[root(x)];
    }
    bool isSame(int x, int y) {
        return root(x) == root(y);
    }
    bool unite(int x, int y) {
        x = root(x), y = root(y);
        if(x != y) {
            if(t[y] < t[x]) swap(x, y);
            t[x] += t[y], t[y] = x;
        }
        return x != y;
    }
};
signed main() {
    INCANT;
    int n, m, a, b, c;
    set<int> s;
    cin>>n>>m;
    UnionFind uf(n);
    rep(i, m) {
        cin>>a>>b>>c;
        a--, b--;
        uf.unite(a, b);
    }
    rep(i, n) {
        s.insert(uf.root(i));
    }
    cout<<s.size()<<endl;
}
