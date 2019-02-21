#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <array>
#include <tuple>
#include <random>

using namespace std;
typedef long long int ll;

#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(int i = int(a); i < int(b); i++)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep,)(__VA_ARGS__)
#define all(x) (x).begin(), (x).end()

#define INF 10000000000

ll a, b, c, n, x, y, z, w, h, ans = 0, cnt = 0, mx = 0, mn = INF;
string s;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<vector<ll>> board(3, vector<ll>(3));
    rep(i, 3){
        rep(j, 3){
            cin >> board[i][j];
        }
        mn = min({board[i][0], board[i][1], board[i][2]});
        rep(j, 3){
            board[i][j] -= mn;
        }
    }
    if(!equal(all(board[1]), all(board[2])) || !equal(all(board), all(board))){
        cout << "No" << endl;
        return 0;
    }
    rep(j, 3){
        mn = min({board[0][j], board[1][j], board[2][j]});
        rep(i, 3){
            board[i][j] -= mn;
        }
    }
    rep(j, 3){
        if(board[0][j] != board[1][j] || board[1][j] != board[2][j]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}
