N = int(input())
x = []
y = []
for _ in range(N):
    X, Y = map(int, input().split(' '))
    x.append(X)
    y.append(Y)

left = x[0]
right = x[0]
bottom = y[0]
top = y[0]

for i in x:
    if left > i:
        left = i
    if right < i:
        right = i

for i in y:
    if bottom > i:
        bottom = i
    if top < i:
        top = i

width = right - left
height = top - bottom

print(width * height)