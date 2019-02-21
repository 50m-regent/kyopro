dict = {}
for _ in range(int(input())):
    s = input()
    if s in dict:
        dict[s] += 1
    else:
        dict[s] = 1
print(max(dict, key=dict.get))
