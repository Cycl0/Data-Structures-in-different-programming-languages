def print_in_brackets(stack):
    print("[", end='')
    for i in range(stack.top + 1):
        print(stack.array[i], end='')
        if i is not stack.top:
            print(", ", end='')
    print("]")

