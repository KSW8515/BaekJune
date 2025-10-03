N = int(input())
n = 1
c = 1
while True:
    if n >= N:
        break
    n = n + 6 * c
    c += 1

print(c)