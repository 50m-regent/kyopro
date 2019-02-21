n = input()
s = input()
cnt = 0
ans = 0
for c in s:
    if c == 'I':
        cnt += 1
        ans = max(ans, cnt)
    else:
        cnt -= 1
print(ans)
