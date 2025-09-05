n = int(input())

num_sum = 0
line = 1

move_count = 0

while True:
    num_sum += line
    if num_sum >= n:
        break
    line += 1

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