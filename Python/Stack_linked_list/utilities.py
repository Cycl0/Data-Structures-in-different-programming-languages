def print_all(stack):
    # Start at the head
    node = stack.head
    print("[", end='')
    # Iterate through and print
    while node:
      print(node.value, end='')
      if node.next:
        print(", ", end='')
      node = node.next
    print("]")
