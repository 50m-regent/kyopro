INF, MOD = float("inf"), 1e9 + 7
MAX, MIN = -INF, INF
dx1, dy1, dx2, dy2 = [-1, 0, 1, 0], [0, -1, 0, 1], [-1, 0, 1, -1, 1, -1, 0, 1], [-1, -1, -1, 0, 0, 1, 1, 1]

def get_int():
    return int(input())

def get_int_list():
    return list(map(int, input().split()))

def mins(x, y):
    x = min(x, y)

def maxs(x, y):
    x = max(x, y)

while(True):
    try:
        n = int(input())
        a = []
        a.append(n)
        while(True):
            x = 3 * a[len(a) - 1] + 1 if a[len(a) - 1] % 2 else int(a[len(a) - 1] / 2)
            if x in a:
                print(len(a) + 1)
                break
            a.append(x)
    except EOFError:
        exit()
