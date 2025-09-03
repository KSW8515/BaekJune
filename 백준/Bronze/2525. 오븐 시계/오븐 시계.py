A, B = map(int, input().split(' '))
C = int(input())

H = C // 60
M = C % 60

A += H
B += M
if B >= 60:
    A+= 1
    B-= 60
if A >= 24:
    A -= 24

print(A, B)
