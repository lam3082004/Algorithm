from itertools import permutations

a, b = input().split()


c = list(permutations(a, int(b)))
c = sorted(c, reverse=False)

for i in c:
    print(*i, sep='')
