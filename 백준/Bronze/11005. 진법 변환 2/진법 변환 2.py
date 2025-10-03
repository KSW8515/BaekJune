N, B = map(int, input().split(' '))

temp = 0
result = ""
while True:
    y = N % B
    N = N//B

    if y > 9:
        y += 55
        y = chr(y)
    result += str(y)

    if N == 0:
        break

print(result[::-1])