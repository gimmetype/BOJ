n = int(input())
num1 = set(map(int, input().split()))

m = int(input())
num2 = map(int, input().split())

for num in num2:
    if num in num1:
        print('1')
    else:
        print('0')