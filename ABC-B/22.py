#s = input()
n = int(input())
#a, b = map(int, input().split())
#a, b = input().split()
#a, b, c = map(int, input().split())
#a, b, c = input().split()
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
cnt, ans, mx, mn = 0, 0, 0, 100000000
tmp = [0 for _ in range(max(a) + 1)]
for i in a:
    if tmp[i]:
        ans += 1
    tmp[i] += 1
print(ans)
