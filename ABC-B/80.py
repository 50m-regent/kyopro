n = int(input())
print("No" if n % sum(map(int, list(str(n)))) else "Yes")
