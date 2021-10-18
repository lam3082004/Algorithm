import array as arr
import math


class Myclass():

    def method1(self, a):
        b = {}
        for _ in range(a):
            a = input().split()
            name, score = a[0], a[1:]
            score = map(float, score)
            b[name] = score
        name2 = input()
        s = 0
        for i in b[name2]:
            s = s+i/3
        print("%.2f" % s)


def main():
    c = Myclass()
    # a, b = map(int, input().split())
    n = int(input())
    c.method1(n)


if __name__ == "__main__":
    main()
