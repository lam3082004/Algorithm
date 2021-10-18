import array as arr
import math


class Myclass():

    def method1(self):
        t = input().split()
        print("-".join(t))


def main():
    c = Myclass()
    # a, b = map(int, input().split())
    # n = int(input())
    # n = input()
    c.method1()


if __name__ == "__main__":
    main()
