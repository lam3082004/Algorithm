import math


def nguyento(n):
    if (n < 2):
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if (n % i == 0):
            return False
    return True


def lam(a):
    s = int(0)
    for i in range(1, int(math.sqrt(a))+1):
        if a % i == 0:
            s = s+i+a/i
        if i*i == a:
            s = s-i
    return int(s)


def cs(x):
    s = int(0)
    for i in x:
        s = s+ord(i)-48
    return s


# Start
if __name__ == '__main__':
    n, m = map(int, input().split())
    b = list()
    c = list()
    n = int(input())
    n = n*2
    a = list(map(int, input().split()))
    # a.sort(key=a[:2])
    for i in range(0, int(n/2)):
        b.append(a[i])
    for i in range(int(n/2), n):
        c.append(a[i])
    for i in range(int(n/2), int(n)):
        print(c[i], end=' ')
