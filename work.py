words = [
    'dream',
    'dreamer',
    'erase',
    'eraser'
]
s = input()
while s != '':
    flag = False
    for word in words:
        s.rstrip(word)
        flag = True
    if flag is False:
        break
if s != '':
    print('NO')
else:
    print('YES')
