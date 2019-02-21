while(True):
    try:
        s, t = [input() for i in range(2)]
        if len(s) > len(t):
            print("GREATER")
        elif len(s) < len(t):
            print("LESS")
        else:
            print("GREATER" if s > t else "LESS" if s < t else "EQUAL")
    except EOFError:
        exit()
