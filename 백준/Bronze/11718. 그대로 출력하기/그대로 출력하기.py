list_string = []
while True:
    try:
        temp = input()
        list_string.append(temp)
    except EOFError:
        for s in list_string:
            print(s)
        break