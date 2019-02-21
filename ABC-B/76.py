n, k = [int(input()) for _ in range(2)]
ans = 1
while ans < k and n:
    ans *= 2
    n -= 1
while n:
    ans += k
    n-= 1
print(ans)
