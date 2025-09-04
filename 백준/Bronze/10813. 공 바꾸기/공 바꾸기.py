n, m = map(int,input().split(' '))
list1 = []
for i in range(n):
    list1.append(i + 1)
    
for i in range(m):
    a, b = map(int,input().split(' '))
    temp = list1[a - 1]
    list1[a - 1] = list1[b - 1]
    list1[b - 1] = temp

for i in range(n):
    print(list1[i], end = ' ')