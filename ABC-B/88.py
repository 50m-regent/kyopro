n = int(input())
list = list(map(int, input().split()))
alice, bob = 0, 0
list.sort()
list.reverse()
for i in range(len(list)):
    if i % 2:
        bob += list[i]
    else:
        alice += list[i]
print(alice - bob)
