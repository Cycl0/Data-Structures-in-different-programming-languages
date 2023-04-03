import stack
import utilities

def main():
  Stack = stack.Stack
  push = stack.push
  pop = stack.pop
  print_in_brackets = utilities.print_in_brackets
  stack_array = Stack()
  push(stack_array, 1)
  push(stack_array, 2)
  push(stack_array, 3)
  print_in_brackets(stack_array)
  print(f"Element {pop(stack_array)} popped")
  print_in_brackets(stack_array)

if __name__ == '__main__':
  main()
