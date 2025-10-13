x, y, w, h = map(int, input().split(' '))
x_s = w - x
y_s = h - y

l = []
l.append(x)
l.append(y)
l.append(x_s)
l.append(y_s)

m = l[0]

for i in l:
    if m > i:
        m = i

print(m)