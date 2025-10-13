N = int(input())
L = list(map(int, input().split(' ')))

count = 0

for i in L:
    if i <= 1:
        continue
    
    count += 1
    for n in range(2, ((i // 2) + 1)):
        if i % n == 0:
            count -= 1
            break

print(count)