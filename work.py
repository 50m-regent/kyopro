n = int(input())
jp = [0] + list(map(int,input().split())) + [0]
cnt = {}

for i in range(n + 1):
    if jp[i] < jp[i + 1]:
        try:
            cnt[jp[i]] += 1
        except KeyError:
            cnt[jp[i]] = 1
        try:
            cnt[jp[i + 1]] -= 1
        except KeyError:
            cnt[jp[i + 1]] = -1
    elif jp[i] > jp[i + 1]:
        try:
            cnt[jp[i]] -= 1
        except KeyError:
            cnt[jp[i]] = -1
        try:
            cnt[jp[i + 1]] += 1
        except KeyError:
            cnt[jp[i + 1]] = 1

heights = sorted(cnt.keys())
s, m = 0, 0
for h in heights:
  s += cnt[h]
  m = max(m, s)
print(m // 2)
