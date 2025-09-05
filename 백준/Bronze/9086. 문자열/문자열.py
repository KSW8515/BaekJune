n = int(input())
l1 = []
for _ in range(n):
    s = input()
    l1.append(s[0] + s[-1])

for c in l1:
    print(c)