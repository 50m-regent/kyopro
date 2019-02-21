s, t = [input() for _ in range(2)]
if len(s) < len(t):
    print("UNRESTORABLE")
    exit()
flag1 = True
for i in range(len(s) - len(t) + 1):
    flag2 = True
    for j in range(i, len(t)):
        if s[i + j] == t[j] or s[i + j] == '?':
            continue
        else:
            flag2 = False
            break
    if flag2:
        flag1 = False
        t_start = i
        break
if flag1:
    print("UNRESTORABLE")
    exit()
o = ""
for i, c in enumerate(s):
    if c == '?':
        if i >= t_start and i < t_start + len(t):
            o += t[i - t_start]
        else:
            o += 'a'
    else:
        o += c
print(o)
