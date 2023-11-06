import sys

line = sys.stdin.readline().split()
target = line[0]
b = int(line[1])

answer = 0

for i in range(len(target)):
    if target[i].isdecimal()==False:
        answer += (ord(target[i])-55)*b**(len(target)-1-i)
    else:
        answer += int(target[i])*b**(len(target)-1-i)
print(answer)