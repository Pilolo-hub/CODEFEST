class MinStack:
    def __init__(self):
        self.stack = []
        self.minStack = []
        
    
    def push(self, val: int) -> None:
        self.stack.append(val)
        minval = min(val, self.minStack[-1] if self.minStack else val)
        self.minStack.append(minval)
        

    def pop(self) -> None:
        self.stack.pop()
        self.minStack.pop()

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.minStack[-1]

    def printMe(self):
        print(self.stack)
        print(self.minStack)
        
if __name__ == "__main__":
    newStack = MinStack()
    newStack.push(-2)
    newStack.push(0)
    newStack.push(-3)
    newStack.push(-5)
    newStack.printMe()
    print(newStack.getMin())
    print(newStack.pop())
    print(newStack.getMin())
    newStack.printMe()
