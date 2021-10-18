import array as arr
import math


def nguyento(a):
    dem = 0
    for i in range(1, int(math.sqrt(a)) + 1):
        if a % i == 0:
            dem += 1
    if dem == 2:
        return True
    return False


def cs(x):
    for i in x:
        if i > '9' or i < '0':
            return False
    return True


class Myclass():

    def method1(self, a):
        a = list(map(int, input().split()))

        for i in range(0, len(a)):
            if nguyento(a[i]):
                print("NO")
            else:
                print("YES")

    def method2(self, a):
        a = list(input().split())

        for i in range(len(a)-1):
            for j in range(i+1, len(a)):
                if cs(a[i]) and cs(a[j]):
                    if int(a[i]) > int(a[j]):
                        a[i], a[j] = a[j], a[i]
        for i in a:
            print(i, end=' ')


def main():
    c = Myclass()
    # a, b = map(int, input().split())
    n = int(input())
    # c.method2(a, b)
    c.method2(n)


if __name__ == "__main__":
    main()
