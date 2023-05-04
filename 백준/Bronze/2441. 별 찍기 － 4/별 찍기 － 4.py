s = int(input())

for i in range(1, s+1):
    print(" " * (i - 1) + "*" * (s + 1 - i))
