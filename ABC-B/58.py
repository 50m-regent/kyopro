while(True):
    try:
        o, e = [input() for _ in range(2)]
        s = ""
        for i in range(len(e)):
            s += o[i] + e[i]
        if len(o) != len(e):
            s += o[len(o) - 1]
        print(s)
    except EOFError:
        exit()
