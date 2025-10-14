N = int(input())
num = []
for i in range(N):
    temp = int(input())
    num.append(temp)
num.sort()

for n in num:
    print(n)