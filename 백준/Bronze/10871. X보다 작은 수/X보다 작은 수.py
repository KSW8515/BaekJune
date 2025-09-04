N, X = map(int, input().split(' '))
l = list(map(int, input().split(' ')))

for n in l:
    if n < X:
        print(f'{n} ', end = '')