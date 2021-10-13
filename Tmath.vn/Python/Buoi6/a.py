import array as arr
import math


def nguyento(n):
    if (n < 2):
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if (n % i == 0):
            return False
    return True


def cs(x):
    dem = int(0)
    while x > 0:
        if nguyento(x % 10):
            dem = dem+1
        x = int(x/10)
    return dem


class Myclass():

    def method1(self, a):
        dem = int(0)
        f = [1, 1]

        for x in range(2, 80):
            next = f[x - 1] + f[x - 2]
            f.append(next)

        # for x in range(79, 0, -1):
        #     print(f[x], end=' ')
        for i in range(79, 1, -1):
            if f[i] <= a and nguyento(f[i]):
                print(f[i])
                break


def main():
    c = Myclass()
    # n, m = map(int, input().split())
    n = int(input())
    c.method1(n)
    # print(cs(n))


if __name__ == "__main__":
    main()
