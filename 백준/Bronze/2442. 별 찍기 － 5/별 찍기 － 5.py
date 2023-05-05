n = int(input())

for i in range(1, n + 1):
    print(" " * (n - i), end='') # 띄어쓰기 횟수
    print("*" * (2 * i - 1))