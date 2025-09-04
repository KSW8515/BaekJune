n, m = map(int,input().split(' '))
list_num = []
for i in range(n):
    list_num.append(i + 1)

for _ in range(m):
    i, j = map(int,input().split(' '))
    temp_list = list_num[i - 1:j]
    temp_list.reverse()
    list_num[i - 1:j] = temp_list

for num in list_num:
    print(num, end = ' ')