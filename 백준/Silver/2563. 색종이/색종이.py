base = []

for _ in range(100):
    temp_list = []
    for _ in range(100):
        temp_list.append(0)
    base.append(temp_list)

n = int(input())

for _ in range(n):
    x, y = map(int, input().split(' '))
    for j in range(y,y + 10):
        for i in range(x,x+10):
            base[i][j] = 1

oSum = 0

for li in base:
    oSum += sum(li)

print(oSum)