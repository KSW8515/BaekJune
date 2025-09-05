b = []

for _ in range(5):
    s = input()
    b.append(s)

for y in range(15):
    for x in range(5):
        if ((len(b[x])) > y):
            print(b[x][y],end='')