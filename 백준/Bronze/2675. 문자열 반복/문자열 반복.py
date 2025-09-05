n = int(input())
result_list = []
for _ in range(n):
    a, b = map(str, input().split(' '))
    a = int(a)
    temp = ''
    for s in b:
        temp += s*a
    result_list.append(temp)

for ch in result_list:
    print(ch)