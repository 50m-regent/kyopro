n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
extra = []
loss = ans = 0
for i in range(n):
    dif = a[i] - b[i]
    extra.append(dif)
    loss += min(0, dif)
    if dif < 0:
        ans += 1
extra.sort(reverse=True)
for num in extra:
    if loss < 0:
        loss += num
        ans += 1
    else:
        print(ans)
        exit()
print(-1)
