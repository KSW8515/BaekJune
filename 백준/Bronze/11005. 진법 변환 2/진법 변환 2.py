N, B = map(int, input().split(' '))

arr = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
result = ""
while N:
    result += arr[N%B]
    N = N//B
print(result[::-1])