list_alpha = []
s = input()
s = s.upper()
for _ in range(26):
    list_alpha.append(0)
    
for c in s:
    asc = ord(c)
    asc -= 65
    list_alpha[asc] += 1

maxV = max(list_alpha)
maxC = 0

for n in list_alpha:
    if n == maxV:
        maxC+=1

if maxC > 1:
    print('?')
else:
    i = list_alpha.index(maxV)
    i += 65
    print(chr(i))