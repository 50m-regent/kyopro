n = input()
print(((int(n[0]) + 9 * (len(n) - 1)) if (n[1:] == (len(n) - 1) * '9') else ((int(n[0]) - 1) + 9 * (len(n) - 1))))
