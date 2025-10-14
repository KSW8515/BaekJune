s = int(input())

num = []

while True:
    n = s % 10
    num.append(n)
    s = int(s // 10)
    if s == 0:
        break

num.sort()
num.reverse()
for n in num:
    print(n, end ='')