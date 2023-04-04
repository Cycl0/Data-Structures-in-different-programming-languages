import stack
import utilities

def main():
  # New stack
  new_stack = stack.LinkedListStack()
  new_stack.push(1)
  new_stack.push(2)
  new_stack.push(3)
  utilities.print_all(new_stack)
  print(f"Element {new_stack.pop()} popped")
  utilities.print_all(new_stack)

if __name__ == '__main__':
  main()
