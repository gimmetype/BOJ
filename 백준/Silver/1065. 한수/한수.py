n = int(input())

def number(n: int):
    cnt = 0
    for i in range(1, n+1):
        m = list(map(int, str(i)))
        if i < 100:
            cnt += 1
        elif m[0] - m[1] == m[1] - m[2]:
            cnt += 1
    return cnt

print(number(n))