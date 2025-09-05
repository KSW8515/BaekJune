list_ori = [1, 1, 2, 2, 2, 8]
list_my = []
list_my = list(map(int,input().split(' ')))

for i in range(len(list_ori)):
    print(f'{list_ori[i] - list_my[i]} ', end = '')