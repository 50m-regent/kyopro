n, m = map(int, input().split())
a = [input() for _ in range(n)]
b = [input() for _ in range(m)]
for i in range(n - m + 1):
    for j in range(n - m + 1):
        flag = True
        for k in range(m):
            if a[k + j][i:i + m] != b[k]:
                flag = False
                break
        if flag:
            print("Yes")
            exit()
print("No")
