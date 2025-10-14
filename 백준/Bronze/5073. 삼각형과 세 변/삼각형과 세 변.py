result = []
while True:
    a, b, c = map(int, input().split(' '))
    if a == b and b == c and a == 0:
        break

    if (a + b) <= c or (a + c) <= b or (b + c) <= a:
        result.append('Invalid')
        continue

    if a == b and b == c:
        result.append('Equilateral')
    elif a != b and b != c and a != c:
        result.append('Scalene')
    else:
        result.append('Isosceles')

for r in result:
    print(r)