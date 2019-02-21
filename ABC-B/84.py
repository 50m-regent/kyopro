a, b = map(int, input().split())
s = input()
for i, c in enumerate(s):
    if i != a and not c.isdecimal() or i == a and c != '-':
        print("No")
        exit()
print("Yes")
