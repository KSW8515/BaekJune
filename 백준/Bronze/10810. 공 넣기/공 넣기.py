n, m = map(int,input().split(' '))
list1 = []
for _ in range(n):
    list1.append(0)
for _ in range(m):
    i, j, k = map(int,input().split(' '))
    for x in range(i, j + 1):
        list1[x - 1] = k
for i in range(n):
    print(list1[i], end = ' ')