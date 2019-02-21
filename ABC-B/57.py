while(True):
    try:
        n, m = map(int, input().split())
        ab = [list(map(int, input().split())) for _ in range(n)]
        cd = [list(map(int, input().split())) for _ in range(m)]
    except EOFError:
        exit()
    for a, b in ab:
        dist = [abs(a - c) + abs(b - d) for c, d in cd]
        print(dist.index(min(dist)) + 1)
