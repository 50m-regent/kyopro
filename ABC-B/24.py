#n = int(input())
#s = input()
n, m = map(int, input().split())
#s, t = input().split()
#n, m, l = map(int, input().split())
#s, t, r = input().split()
#a = map(int, input().split())
#a = input().split()
a = [int(input()) for _ in range(n)]
#a = [input() for _ in range(n)]

#t = input()
#m = int(input())
#p, q = map(int, input().split())
#p, q = input().split()
#p, q, r = map(int, input().split())
#p, q, r = input().split()
#b = map(int, input().split())
#b = input().split()
#b = [int(input()) for _ in range(m)]
#b = [input() for _ in range(m)]
cnt, ans, mx, mn = 0, m, 0, 100000000
for i in range(n - 1):
    if a[i + 1] - a[i] < m:
        ans += a[i + 1] - a[i]
    else:
        ans += m
print(ans)
