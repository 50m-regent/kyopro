n = int(input())
a = map(int, input().split())
ans = 1000000000
for i in a:
    cnt = 0
    while(i % 2 == 0):
        i /= 2
        cnt += 1
    ans = min(ans, cnt)
print(ans)
