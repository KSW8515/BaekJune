# A의 B번째 약수 (* B번째 약수가 없는 경우 0출력)
A, B = map(int, input().split(' '))

N = A // 2

result = 0

for n in range(1, N + 1):
    if A % n == 0:
        B -= 1
    
    if B == 0:
        result = n
        break

if B == 1:
    print(A)
else:
    print(result)