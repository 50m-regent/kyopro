import queue

n = int(input())
m = 2 ** n
a = list(map(int, input().split()))
a = list(reversed(sorted(a)))
q = queue.Queue()
b = []

q.put([a[0], n])
b.append(a[0])

while not q.empty():
    top = q.get()
    while top[1]:
        q.put([top[0] - 1, top[1] - 1])
        b.append(top[0] - 1)
        top[1] -= 1

for i, j in zip(a, b):
    if i > j:
        print("No")
        exit()
print("Yes")