N = int(input())
count = 0
num = 665
while True:
    num += 1
    temp = str(num)
    if "666" in temp:
        count += 1
    
    if count == N:
        break
print(num)