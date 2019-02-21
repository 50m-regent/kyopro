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
    string w;
    cin >> w;
    for(int i = 0; w[i]; i++){
        if((w[i] == 'a') || (w[i] == 'i') || (w[i] == 'u') || (w[i] == 'e') || (w[i] == 'o'))
            continue;
        else
            cout << w[i];
    }
    cout << endl;
}
