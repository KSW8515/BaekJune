A = int(input())

F1 = A % 4 == 0
F2 = A % 100 != 0
F3 = A % 400 == 0

if F1 and (F2 or F3):
    print(1)
else:
    print(0)