num = []
for _ in range(5):
    temp = int(input())
    num.append(temp)
num.sort()
nSum = sum(num)
ave = int(nSum / 5)
print(ave)
print(num[2])