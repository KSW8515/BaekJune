n = int(input())
l = list(map(int, input().split(' ')))
target = int(input())
count = 0
for num in l:
    if num == target:
        count += 1
print(count)
