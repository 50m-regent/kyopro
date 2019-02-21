n = int(input())
a = [int(input()) for _ in range(n)]
now = 1
for i in range(n):
    now = a[now - 1]
    if now == 2:
        print(i + 1)
        exit()
print(-1)
