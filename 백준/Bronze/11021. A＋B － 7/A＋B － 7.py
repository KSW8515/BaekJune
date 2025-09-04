n = int(input())
l1 = []
for i in range(n):
    a, b = map(int, input().split(' '))
    l1.append(a+b)

for i in range(n):
    print(f'Case #{i + 1}: {l1[i]}')