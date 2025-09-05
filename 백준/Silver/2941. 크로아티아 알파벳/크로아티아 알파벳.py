cro = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

s = input()

for c in cro:
    s = s.replace(c, '1')

print(len(s))