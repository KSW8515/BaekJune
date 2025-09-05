dic_grade_score = {'A+' : 4.5, 'A0' : 4.0, 'B+' : 3.5,
                   'B0' : 3.0, 'C+' : 2.5, 'C0' : 2.0,
                   'D+' : 1.5, 'D0' : 1.0, 'F' : 0.0,}

total_rating = 0
total_grade = 0

for _ in range(20):
    n, r, g = input().split(' ')
    if g == 'P':
        pass
    else:
        total_rating += dic_grade_score[g] * float(r)
        total_grade += float(r)

print(f'{total_rating / total_grade:.6f}')