L, R = map(int, input().split())
MOD = 10 ** 9 + 7
l = list(reversed('{:0100b}'.format(L)))
r = list(reversed('{:0100b}'.format(R)))
dp = [[[[-1 for l in range(2)] for k in range(2)] for j in range(2)] for i in range(100)]
def f(i, j, k, o):
    if i < 0:
        return 1
    if dp[i][j][k][o] > -1:
        return dp[i][j][k][o]
    ret = 0
    if j or l[i] == '0':
        ret += f(i - 1, j, 1 if r[i] == '1' else k, o)
        if (k or r[i] == '1') and o:
            ret += f(i - 1, j, k, o)
    if k or r[i] == '1':
        ret += f(i - 1, 1 if l[i] == '0' else j, k, 1)
    ret %= MOD
    dp[i][j][k][o] = ret
    return ret

print(f(99, 0, 0, 0))
