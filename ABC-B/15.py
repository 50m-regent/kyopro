n = input()
a = list(map(int, input().split()))
b = []
for i in a:
    if i:
        b.append(i)
print((sum(b) + len(b) - 1) // len(b))
