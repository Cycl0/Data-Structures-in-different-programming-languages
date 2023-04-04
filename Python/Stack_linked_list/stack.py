class Node:
  def __init__(self, value):
    self.value = value
    self.next = None

def get_last_node(head):
    # Start at the head
    node = head
    # Iterate to the end of the list
    while node.next:
      node = node.next
    return node

def get_second_last_node(head):
    # Start at the head
    node = head
    # Iterate to the second last element
    while node.next.next:
      node = node.next
    return node

class LinkedListStack:
  def __init__(self, head=None):
    self.head = head

  def push(self, value):
    # If list is not empty
    if self.head:
      # Get last node
      node = get_last_node(self.head)
      # Create a new node with the value at the end of the list
      node.next = Node(value)
    else:
      # Create the first node if none
      self.head = Node(value)

  def pop(self):
    # If list is not empty
    if self.head:
      # Get second last node
      node_sec_last = get_second_last_node(self.head)
      # Get last node before deleting reference
      node_last = node_sec_last.next
      # Delete last node reference
      node_sec_last.next = None
      return node_last.value

