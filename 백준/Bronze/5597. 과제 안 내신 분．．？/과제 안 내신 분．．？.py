list_done = []
for i in range(30):
    list_done.append(i + 1)

for _ in range(28):
    num = int(input())
    list_done.remove(num)

for num in list_done:
    print(num)