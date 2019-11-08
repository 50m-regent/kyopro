// テンプレ
#include<bits/stdc++.h>
using namespace std;
#define int long long

// ループ
#define _overload(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(int i = (int)(a); i < (int)(b); i++)
#define rep(...) _overload(__VA_ARGS__, repi, _rep)(__VA_ARGS__)
#define _rev(i, n) revi(i, n, 0)
#define revi(i, a, b) for(int i = (int)(a - 1); i >= (int)(b); i--)
#define rev(...) _overload(__VA_ARGS__, revi, _rev)(__VA_ARGS__)
#define each(i, n) for(auto&& i: n)

// 定数
const int INF = 1e18;
const int MOD = 1e9 + 7;

// bound
template<class T>
int lb(vector<T>& x,T n){return lower_bound(all(x) , n) - x.begin();}
template<class T>
int ub(vector<T>& x,T n){return upper_bound(all(x) , n) - x.begin();}

// UnionFind りーぜんと
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

// セグ木 りーぜんと
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

// 素因数分解
map<int, int> factorization(int n) {
    map<int, int> res;
    rep(i, 2, sqrt(n) + 1) {
        if(i > 3) i++;
        while(!(n%i)) {
            res[i]++;
            n /= i;
        }
    }
    if(n > 1) {
        res[n]++;
    }
    return res;
}

// 約数列挙
vector<int> divisor(int n) {
    vector<int> res;
    rep(i, 1, sqrt(n) + 1) {
        if(!(n % i)) {
            res.push_back(i);
            if(i * i < n) res.push_back(n / i);
        }
    }
    return res;
}

// LCM
int lcm(int a, int b) {return a / gcd(a, b) * b;}

// 累乗
int factorial(int a) {return a < 2 ? 1 : factorial(a - 1) * a;}

// 総和
int summation(int a) {return a < 1 ? 0 : (a * a + a) / 2;}

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

// 最長回文 v[i]がi文字目中心の差最大値
vector<int> manacher(string &s) {
    vector<int> radius(s.size());
    int i = 0, j = 0;
    while(i < s.size()) {
        while(i - j >= 0 && i + j < s.size() && s[i - j] == s[i + j]) {
            ++j;
        }
        radius[i] = j;
        int k = 1;
        while(i - k >= 0 && i + k < s.size() && k + radius[i - k] < j) {
            radius[i + k] = radius[i - k];
            ++k;
        }
        i += k;
        j -= k;
    }
    return radius;
}