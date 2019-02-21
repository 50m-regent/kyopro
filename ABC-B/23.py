n = int(input())
s = input()
#a, b = map(int, input().split())
#a, b = input().split()
#a, b, c = map(int, input().split())
#a, b, c = input().split()
#a = map(int, input().split())
#a = input().split()
#a = [int(input()) for _ in range(n)]
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
while len(s) > 1:
    if s[0] == 'a' and s[-1] == 'c' or s[0] == 'b' and s[-1] == 'b' or s[0] == 'c' and s[-1] == 'a':
        s = s[1:-1]
        ans += 1
    else:
        print(-1)
        exit()
if len(s):
    print(ans)
else:
    print(-1)
