s = input()
while len(s):
    if s[-2:] == "ch":
        s = s[:-2]
        continue
    elif s[-1] == 'o':
        s = s[:-1]
        continue
    elif s[-1] == 'k':
        s = s[:-1]
        continue
    elif s[-1] == 'u':
        s = s[:-1]
        continue
    print("NO")
    exit()
print("YES")
