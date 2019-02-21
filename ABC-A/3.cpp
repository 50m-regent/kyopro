#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <time.h>
#include <list>

using namespace std;
typedef long long ll;

int main(){
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        sum += i * 10000;
    }
    cout << sum / n << endl;
}
