import math

n = int(input())
# n <= line * (line + 1) / 2 의 값
line = math.ceil((-1 + math.sqrt(1 + 8 * n)) / 2)

num_sum = line * (line + 1) / 2
num_sum = int(num_sum)

move_count = 0

if n != 1 and n - (num_sum - line) > 0:
    move_count = n - (num_sum - line) - 1

if line % 2 == 0: #짝수는 아래로
    x = line - move_count
    y = 1 + move_count
    print(f'{y}/{x}')
else:   #홀수는 위로
    x = 1 + move_count
    y = line - move_count

    print(f'{y}/{x}')
