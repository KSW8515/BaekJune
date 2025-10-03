T = input()
T = int(T)

input_list = []

v_list = [25, 10, 5, 1]
r_list = []

for _ in range(T):
    x = input()
    x = int(x)
    input_list.append(x)

for i in input_list:
    temp_list = []
    for v in v_list:
        if i >= v:
            temp = i // v
            temp = int(temp)
            temp_list.append(temp)
            i = i % v
        else:
            temp_list.append(0)
    r_list.append(temp_list)


for r in range(len(r_list)):
    for n in range(len(r_list[r])):
        if n == len(r_list[r]) - 1:
            print(r_list[r][n], end = '')
        else:
            print(r_list[r][n], end = ' ')
    if r != len(r_list) - 1:
        print()