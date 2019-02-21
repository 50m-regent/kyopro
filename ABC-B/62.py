h, w = map(int, input().split())
print('#' * (w + 2) + '\n' + ''.join(['#' + input() + '#\n' for _ in range(h)]) + '#' * (w + 2))
