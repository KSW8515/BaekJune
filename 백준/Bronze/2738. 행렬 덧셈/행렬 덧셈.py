n, m = map(int, input().split(' '))
list_A = []
list_B = []
for _ in range(n):
    row = list(map(int, input().split(' ')))
    list_A.append(row)
for _ in range(n):
    row = list(map(int, input().split(' ')))
    list_B.append(row)

for row in range(n):
    for col in range(m):
        print(list_A[row][col] + list_B[row][col], end = ' ')
    print()