N, B = input().split(" ")
B = int(B)

l = len(N)
result_sum = 0
for x in N:
    l -= 1
    if x.isalpha():
        num = (ord(x)-55)
    else:
        num = int(x)
    result_sum += ((B**l)*num)
print(result_sum)