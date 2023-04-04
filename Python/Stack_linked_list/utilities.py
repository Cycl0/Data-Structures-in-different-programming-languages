def print_all(stack):
    # Start at the head
    node = stack.head
    print("[", end='')
    # Iterate through and print
    while node.next:
      print(node.value, end='')
      node = node.next
      if node:
        print(", ", end='')
    # Print last node
    print(node.value, end='')
    print("]")
