n = int(input())
num = list(map(int, input().split(' ')))
prime_number = 0

#소수 구하기 에라토스테네스의 체
for i in num:
    cnt = 0
    if i == 1:
        continue
    for j in range(2, i+1):
            if i % j == 0:
                cnt += 1
    if cnt == 1:
        prime_number += 1

print(prime_number)