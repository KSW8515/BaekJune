a, b = map(str, input().split(' '))
re_a = a[-1::-1]
re_b = b[-1::-1]
a = int(re_a)
b = int(re_b)

if a > b:
    print(a)
else:
    print(b)