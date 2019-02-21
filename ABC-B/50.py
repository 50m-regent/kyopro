n = int(input())
#s = input()
#n, m = map(int, input().split())
#s, t = input().split()
#n, m, l = map(int, input().split())
#s, t, r = input().split()
t = list(map(int, input().split()))
#a = input().split()
#a = [int(input()) for _ in range(n)]
#a = [input() for _ in range(n)]

#t = input()
m = int(input())
#p, q = map(int, input().split())
#p, q = input().split()
#p, q, r = map(int, input().split())
#p, q, r = input().split()
#b = map(int, input().split())
#b = input().split()
#b = [int(input()) for _ in range(m)]
#b = [input() for _ in range(m)]
cnt, ans, mx, mn = 0, 0, 0, 100000000
for i in range(m):
    p, x = map(int, input().split())
    print(sum(t) - t[p - 1] + x)
