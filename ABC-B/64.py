n = input()
print(max([max(a) - min(a) for a in [list(map(int, input().split()))]]))
