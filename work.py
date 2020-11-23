n, m = list(map(int, input().split()))

g = [[] for _ in range(111111)]
for _ in range(m):
    a, b = list(map(int, input().split()))
    g[b].append(a)

def search(now, went, route):
    if now == 1:
        return [route + [now]]

    routes = []

    for nex in g[now]:
        if nex in went:
            continue

        routes += search(nex, went + [now], route + [now])

    return routes

routes = search(n, [], [])
mx = float('inf')
for route in routes:
    mx = min(len(route), mx)

routes = sorted([list(reversed(route)) for route in routes if len(route) == mx])
try:
    for room in routes[0]:
        print(room, end=' ')
    print()
except:
    print(-1)