#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for(int i = 0; i < n; i++)
main() {
    int res = 0, last = 0;
    string s, t;
    vector<int> m[30];
    cin >> s >> t;
    rep(i, s.size()) {
        m[s[i] - 'a'].push_back(i + 1);
    }
    for(auto c: t) {
        int j = c - 'a';
        if(!m[j].size()) {
            cout << -1;
            return 0;
        }
        if(m[j][m[j].size() - 1] <= last) res++, last = 0;
        last = *upper_bound(all(m[c]), last);
    }
    cout << res * s.size() + last;
}
