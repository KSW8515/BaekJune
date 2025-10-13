type = ['factor', 'multiple', 'neither']

result = []
while True:
    A, B = map(int, input().split(' '))
    if A == B and A == 0:
        break

    if A > B:
        if A % B == 0:
            result.append(type[1])
        else:
            result.append(type[2])
    else:
        if B % A == 0:
            result.append(type[0])
        else:
            result.append(type[2])

for r in result:
    print(r)