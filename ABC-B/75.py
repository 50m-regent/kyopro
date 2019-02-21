h, w = map(int, input().split())
board = [list(input()) for _ in range(h)]
dx = [-1, 0, 1, -1, 1, -1, 0, 1]
dy = [-1, -1, -1, 0, 0, 1, 1, 1]
for i in range(h):
    for j in range(w):
        if board[i][j] is '.':
            board[i][j] = 0
            for k in range(8):
                ni = i + dy[k]
                nj = j + dx[k]
                if ni >= 0 and ni < h and nj >= 0 and nj < w:
                    board[i][j] += 1 if board[i + dy[k]][j + dx[k]] is '#' else 0
for s in board:
    print(''.join(map(str, s)))
