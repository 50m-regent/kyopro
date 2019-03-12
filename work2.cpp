#define gcd __gcd //gcd
ll lcm(ll a, ll b){return a/gcd(a, b)*b;} //lcm
map<ll, ll> factoriazation(ll n){map<ll, ll> ans; rep(i, 2, sqrt(n) + 1) while(!(n%i)) ans[i]++, n /= i; if(n != 1) ans[n]++; return ans;} //素因数分解
bool isPrime(ll n){if(n == 2) return true; if(n < 2 || !(n%2)) return false; for(ll i = 3; i*i <= n; i += 2) if(!(n%i)) return false; return true;} //素数判定
