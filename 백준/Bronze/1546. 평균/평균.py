n = int(input())

score_list = []

score_list = list(map(int,input().split(' ')))
    
maxV = score_list[0]

for num in score_list:
    if maxV < num:
        maxV = num

sum = 0
for num in score_list:
    sum = sum + (num / maxV * 100)
    
print(sum / n)