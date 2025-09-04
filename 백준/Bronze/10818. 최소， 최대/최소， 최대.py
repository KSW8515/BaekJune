N = int(input())
l = list(map(int, input().split(' ')))
minV = l[0]
maxV = l[0]

for num in l:
    if minV > num:
        minV = num
    if maxV < num:
        maxV = num
print(f'{minV} {maxV}')