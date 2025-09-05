s = input()
list1 = list(s.split(' '))
count = 0
for c in list1:
    if len(c) > 0:
        count += 1
        
print(count)