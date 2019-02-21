n = int(input())
ans = 1
mod = 1000000007
for i in range(2, n + 1):
    ans *= i
    ans %= mod
print(ans)
