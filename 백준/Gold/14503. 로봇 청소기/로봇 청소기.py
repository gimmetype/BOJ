def print_matrix(matrix, cnt, R, C, D):
    for y in range(len(matrix)):
        for x in range(len(matrix[0])):
            print(matrix[y][x], end = " ")
        print()
    print(R, C, D)
    print(cnt, end = "\n\n")




N, M = list(map(int, input().split()))
R, C, D = list(map(int, input().split()))
matrix = []

cnt = 0
for i in range(N):
    numbers = list(map(int, input().split()))
    matrix.append(numbers)

while True:
    # 1번
    if matrix[R][C] == 0:
        matrix[R][C] = 2
        cnt += 1

    # 2번
    if matrix[R-1][C] != 0 and matrix[R][C+1] != 0 and matrix[R+1][C] != 0 and matrix[R][C-1] != 0:
        # 남쪽
        if D == 2:
            if matrix[R-1][C] != 1:
                R = R - 1
                continue

            else:
                break

        # 서쪽
        elif D == 3:
            if matrix[R][C+1] != 1:
                C = C + 1
                continue

            else:
                break

        # 북쪽
        elif D == 0:
            if matrix[R + 1][C] != 1:
                R = R + 1
                continue

            else:
                break

        # 동쪽
        elif D == 1:
            if matrix[R][C-1] != 1:
                C = C - 1
                continue

            else:
                break

    else:
        # 동 -> 북, 서 -> 남, 남 -> 동, 북 -> 서
        # 북 동 남 서
        if D == 0:
            D = 3
            if matrix[R][C-1] == 0:
                C = C - 1
                continue

        elif D == 1:
            D = 0
            if matrix[R - 1][C] == 0:
                R = R - 1
                continue

        elif D == 2:
            D = 1
            if matrix[R][C+1] == 0:
                C = C + 1
                continue

        elif D == 3:
            D = 2
            if matrix[R+1][C] == 0:
                R = R + 1
                continue

    # print_matrix(matrix, cnt, R, C, D)

print(cnt)
