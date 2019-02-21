n, m = map(int, input().split())
ans = 0
for x in range(n + 1):
    for y in range(n + 1):
        if m - x - y <= n and m - x - y >= 0:
            ans += 1
print(ans)
