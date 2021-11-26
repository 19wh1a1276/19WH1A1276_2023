class MinStack:

    def __init__(self):
        self.arr = []
        self.minimum = []
        
    def push(self, val: int) -> None:
        self.arr.append(val)
        if len(self.minimum) == 0:
            self.minimum.append(val)
        else:
            self.minimum.append(min(val, self.minimum[-1]))

    def pop(self) -> None:
        if len(self.arr):
            self.arr.pop()
            self.minimum.pop()

    def top(self) -> int:
        return self.arr[-1]

    def getMin(self) -> int:
        return self.minimum[-1]