class Node:
  def __init__(self, value):
    self.value = value
    self.next = None

class LinkedListStack:
  def __init__(self, head=None):
    self.head = head

  def push(self, value):
    # If list is not empty
    if self.head:
      new_node = Node(value)
      # Reference to previous head
      new_node.next = self.head
      # Replace previous head
      self.head = new_node
    else:
      # Create the first node if none
      self.head = Node(value)

  def pop(self):
    # If list is not empty
    if not self.head:
      return None
    popped = self.head.value
    self.head = self.head.next
    return popped

