class Solution:
    def merge(self, lst: List[List[int]]) -> List[List[int]]:
        n = len(lst)
        lst.sort()
        l = [lst[0]]
        for i in range(1, n):
            x, y = l[-1]
            if y >= lst[i][0]:
                l.pop()
                l.append([x, max(y, lst[i][-1])])
            else:
                l.append(lst[i])
        return l