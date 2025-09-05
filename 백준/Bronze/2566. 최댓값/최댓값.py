l = []

for _ in range(9):
    l.append(list(map(int, input().split(' '))))

row = 0
col = 0
maxV = l[row][col]

for r in range(9):
    for c in range(9):
        if l[r][c] > maxV:
            maxV = l[r][c]
            row = r
            col = c

print(maxV)
print(row + 1, col + 1)