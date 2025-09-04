div = set({})

for _ in range(10):
    num = int(input())
    div.add(num%42)
    
print(len(div))