a, b = 2, 1
for i in range(int(input()) - 1):
    tmp = a
    a = b
    b += tmp
print(b)
