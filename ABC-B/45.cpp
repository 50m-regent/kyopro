s = {c: input() for c in ['a', 'b', 'c']}
turn = 'a'
while True:
    n = s[turn]
    if n == '':
        break
    s[turn] = n[1:]
    turn = n[0]
print(turn.upper())
