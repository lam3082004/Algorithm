import array as arr
import math


class Myclass():

    def method1(self, a):
        t = map(int, input().split())
        k = tuple(map(int, input().split()))
        print(hash(k))


def main():
    c = Myclass()
    # a, b = map(int, input().split())
    n = int(input())
    c.method1(n)


if __name__ == "__main__":
    main()
