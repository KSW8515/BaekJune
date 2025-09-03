X = int(input())
N = int(input())
Sum = 0
while N > 0:
    N -= 1
    A, B = map(int, input().split(' '))
    Sum += (A * B)

if X == Sum:
    print('Yes')
else:
    print('No')