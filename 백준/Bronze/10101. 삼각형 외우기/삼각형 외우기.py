# 세 각의 크기가 모두 60이면, Equilateral
# 세 각의 합이 180이고, 두 각이 같은 경우에는 Isosceles
# 세 각의 합이 180이고, 같은 각이 없는 경우에는 Scalene
# 세 각의 합이 180이 아닌 경우에는 Error
a = int(input())
b = int(input())
c = int(input())

if a + b + c != 180:
    print('Error')
else:
    if a == b and b == c:
        print('Equilateral')
    elif a != b and b != c and a != c:
        print('Scalene')
    else:
        print('Isosceles')