a, b = map(int, input().split())
a = list(map(int, input().split()))

x = list()
y = list()
z = list()
maxx = -1000000000000000000
x.append(-1000000000000000000)
y.append(-1000000000000000000)
z.append(-1000000000000000000)

# print(x[:len(a)+1])
for i in range(0, len(a)):
    # x.append(x[i])
    x.append(max(x[i]+a[i], a[i]))
    # res = max(res+a[i]*b, a[i]*b)
    y.append(max(max(x[i], y[i])+a[i]*b, a[i]*b))
    z.append(max(y[i], z[i])+a[i])
    # print(i)
    # print(z[i])
    # print(res)
for i in range(1, len(a)+1):
    # print(x[i], end=' ')
    maxx = max(maxx, max(max(x[i], y[i]), z[i]))

# test
for i in range(1, len(a)+1):
    print(x[i], end=' ')
print()
for i in range(1, len(a)+1):
    print(y[i], end=' ')
print()
for i in range(1, len(a)+1):
    print(z[i], end=' ')

print(maxx)
