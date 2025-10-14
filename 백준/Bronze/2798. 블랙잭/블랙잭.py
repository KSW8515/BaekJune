N, M = map(int, input().split(' '))
num_list = list(map(int, input().split(' ')))
l = len(num_list)

sum = 0
result = 0
for i in range(0, l - 2):
    for j in range(i + 1, l - 1):
        for k in range(j + 1, l):
            sum = num_list[i] + num_list[j] + num_list[k]
            if sum <= M and sum > result:
                result = sum

print(result)