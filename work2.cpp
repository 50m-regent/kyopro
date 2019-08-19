#include <bits/stdc++.h>
using namespace std;
main(){
    int n, res = 0, last = 0;
    string s, t;
    cin >> s >> t;
    map<char, bool> flag;
    map<char, vector<int>> syutu;
    for(int i = 0; i < s.size(); i++){
        char c = s[i];
        syutu[c].push_back(i);
        flag[c] = true;
    }

    for(auto& c:t){
        if(!flag[c]){
            cout << -1;
            return 0;
        }
    }

    res += syutu[t[0]][0] + 1;
    last = syutu[t[0]][0];

    for(int i = 1; i < t.size(); i++){
        char c = t[i];
        if(syutu[c][syutu[c].size() - 1] < last){
            res += s.size() - last;
            last = 0;
        }

        int left = 0, right = syutu[c].size() - 1, mid;

        while(abs(left - right) > 1){
            mid = (left + right) / 2;
            if(syutu[c][mid] > last){
                right = mid;
            }else{
                left = mid;
            }
        }

        int j = syutu[c][right];
        res += j - last;
        last = j;
    }
    cout << res;
}
