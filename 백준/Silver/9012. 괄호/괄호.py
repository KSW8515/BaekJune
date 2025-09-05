class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Stack:
    def __init__(self):
        self.top = None

    def push(self, data):
        n = Node(data)
        if self.top == None:
            self.top = n
        else:
            n.next = self.top
            self.top = n
            
    def pop(self):
        if self.top == None:
            return None
        else:
            result = self.top.data
            self.top = self.top.next
            return result

    def peek(self):
        if self.top == None:
            return None
        else:
            return self.top.data

    def is_empty(self):
        if self.top == None:
            return True
        else:
            return False

    def __str__(self):
        result = ''
        curr = self.top
        while True:
            result += str(curr.data)
            if curr.next == None:
                break
            result += ' -> '
            curr = curr.next
        return result
    
def is_valid(valid):
    s3 = Stack()
    is_vps = True
    for c in valid:
        if c == '(':
            s3.push(c)
        else:
            if s3.pop() == '(':
                continue
            else:
                is_vps = False
                break
    if not s3.is_empty():
        is_vps = False
    if is_vps:
        print('YES')
    else:
        print('NO')

n = int(input())

for _ in range(n):
    valid = input()
    is_valid(valid)