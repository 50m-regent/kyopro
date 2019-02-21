while(True):
    try:
        w, a, b = map(int, input().split())
    except EOFError:
        exit()
    print(abs(max(a, b) - min(a, b) - w) if abs(a - b) > w else 0)
