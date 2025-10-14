N = int(input())
c5 = 0
c3 = 0
c = 0

while True:
    c5 = int(N // 5) - c
    remain = N - (5 * c5)

    if c5 == -1:
        break

    if remain == 0:
        break

    if remain % 3 == 0:
        c3 = int(remain // 3)
        break

    c += 1

if c5 == -1:
    print(c5)
else:
    print(f"{c5+c3}")