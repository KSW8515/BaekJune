a, b, c = map(int, input().split(' '))

sum = 0

if (a + b) <= c:
    sum = 2 * (a + b) - 1
elif (a + c) <= b:
    sum = 2 * (a + c) - 1
elif (b + c) <= a:
    sum = 2 * (b + c) - 1
else:
    sum = a + b + c

print(sum)