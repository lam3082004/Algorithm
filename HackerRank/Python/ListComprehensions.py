a = int(input())
c = int(input())
b = int(input())
n = int(input())
A = []

for i in range(a+1):
    for j in range(b+1):
        for k in range(c+1):
            if i+j+k == n:
                continue
            else:
                A.append([i, j, k])

print(A)
