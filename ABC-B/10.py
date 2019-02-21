n = input()
a = map(int, input().split())
ans = 0
for i in a:
    while i % 2 == 0 or (i + 1) % 3 == 0:
        ans += 1
        i -= 1
print(ans)
