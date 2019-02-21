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

int main() {
	string s, t;
	cin >> s >> t;

	bool can = true;
	for (int i = 0; s[i]; i++) {
		if (s[i] == t[i])
            continue;
		else if (s[i] == '@' && t[i] == '@')
            continue;
		else if (s[i] == '@') {
			if (t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' || t[i] == 'd' || t[i] == 'e' || t[i] == 'r') {
				continue;
			}
		}
		else if (t[i] == '@') {
			if (s[i] == 'a' || s[i] == 't' || s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'r') {
				continue;
			}
		}
		can = false;
		break;
	}

	if (can)
        cout << "You can win" << endl;
	else
        cout << "You will lose" << endl;

	return 0;
}
