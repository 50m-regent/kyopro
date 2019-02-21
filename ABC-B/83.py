n, a, b = map(int, input().split())
print(sum([i if sum(list(map(int, list(str(i))))) >= a and sum(list(map(int, list(str(i))))) <= b else 0 for i in range(1, n + 1)]))
