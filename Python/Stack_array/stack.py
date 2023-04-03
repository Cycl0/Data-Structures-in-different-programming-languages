class Stack:
  def __init__(self, _array = []):
    self.array = _array
    self.top = len(_array) - 1

def pop(stack):
  temp = stack.top
  stack.top -= 1
  return stack.array[temp]

def push(stack, val):
  stack.top += 1
  stack.array[stack.top:] = [val]
