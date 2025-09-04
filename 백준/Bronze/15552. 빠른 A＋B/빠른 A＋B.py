import sys
n = int(input())
for _ in range(n):
    temp = sys.stdin.readline().rstrip('\n')
    a, b = map(int, temp.split(' '))
    print(a + b)