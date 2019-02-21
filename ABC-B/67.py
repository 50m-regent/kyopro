n, k = map(int, input().split())
print(sum([list(reversed(sorted(list(map(int, a.split())))))[i] for a in [input()] for i in range(k)]))
