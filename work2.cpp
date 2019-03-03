#include <bits/stdc++.h>
using namespace std;
#define elv first
#define cor second

int main(){
    int n, cnt = 1, res = 1; cin >> n;
    bool sea[n + 2] = {}; sea[0] = sea[n + 1] = true;
    pair<int, int> jp[n];
    bool flag = true;
    for(int i = 0; i < n; i++){
        cin >> jp[i].elv;
        jp[i].cor = i + 1;
        if(jp[i].elv){
            flag = false;
        }
    }
    if(flag){
        cout << 0 << '\n';
        return 0;
    }
    sort(jp, jp + n);
    for(int i = 0; i < n; i++){
        int p = jp[i].cor;
        sea[p] = true;
        if(sea[p - 1] && sea[p + 1]) cnt--;
        if(!sea[p - 1] && !sea[p + 1]) cnt++;
        if(i == n - 1 || jp[i].elv != jp[i + 1].elv) res = max(res, cnt);
    }
    cout << res << '\n';
}
