n, k = [int(input()) for _ in range(2)]
print(sum([min(i * 2, (k - i) * 2) for i in map(int, input().split())]))
