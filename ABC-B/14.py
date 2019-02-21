n, x = map(int, input().split())
print(sum([a[i] for a in [list(map(int,input().split()))] for i in range(n) if x & (1 << i)]))
