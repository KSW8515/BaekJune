list1 = []

for _ in range(9):
    list1.append(int(input()))

maxI = 1
maxV = list1[0]
for i in range(len(list1)):
    if maxV < list1[i]:
        maxV = list1[i]
        maxI = i + 1

print(maxV)
print(maxI)