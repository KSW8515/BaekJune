N = int(input())
sum = 0
result = 0
for i in range(1, N + 1):
    temp = i
    sum = 0
    while True:
        sum += (temp % 10)
        if (temp // 10) == 0:
            break
        else:
            temp = temp // 10
    if (sum + i) == N:
        result = i
        break

print(result)