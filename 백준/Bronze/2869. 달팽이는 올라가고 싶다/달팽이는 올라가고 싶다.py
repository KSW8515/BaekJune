# V미터인 나무, 낮에 A미터 오르고 밤에 B미터 미끄러진다
A, B, V = map(int, input().split(' '))

count = 0

if V <= A:
    count = 1
else:
    V -= A
    day_up = A - B
    count = V // day_up
    if V % day_up > 0:
        count += 1
    count += 1

print(count)