s = input()
ans = 'a'
for i in range(26):
    if ans not in s:
        print(ans)
        exit()
    ans = chr(ord(ans) + 1)
print("None")
