n = int(input())

for i in range(1, n):
    print(f'{" "*(n - i)}{"*"*(2 * i - 1)}')
print(f'{"*" * (2 * n - 1)}')
for i in range(n - 1, 0, -1):
    print(f'{" "*(n - i)}{"*"*(2 * i - 1)}')