import sys

n = int(sys.stdin.readline())
num = [0] * (10000 + 1)

for _ in range(n):
    num[int(sys.stdin.readline())] += 1
  
for i in range(len(num)):
    if num[i] != 0:
        for _ in range(num[i]):   #이부분의 필요이유? 없어도 동일한데 틀렸다고 나온다.
            print(i)
