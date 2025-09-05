list_num = ['ABC','DEF','GHI','JKL','MNO','PQRS','TUV','WXYZ']
input_string = input()
total_time = 0
for c in input_string:
    for i in range(len(list_num)):
        if list_num[i].find(c) != -1:
            total_time += (i + 3)
            break
print(total_time)