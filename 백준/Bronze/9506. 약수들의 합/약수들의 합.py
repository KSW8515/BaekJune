# 테스트케이스 마다 한줄에 하나씩 출력해야 한다.
# n이 완전수라면, n을 n이 아닌 약수들의 합으로 나타내어 출력한다(예제 출력 참고).
# 이때, 약수들은 오름차순으로 나열해야 한다.
# n이 완전수가 아니라면 n is NOT perfect. 를 출력한다.
while True:
    n = int(input())
    if n == -1:
        break

    l = []
    s = 0

    for i in range(1, ((n // 2) + 1)):
        if n % i == 0:
            l.append(i)
            s += i
    
    if s != n:
        print(f"{n} is NOT perfect.")
    else:
        print(f"{n} = ",end='')
        for index, value in enumerate(l):
            print(f"{value}",end='')
            if index < (len(l) - 1):
                print(" + ",end ='')
        print('')