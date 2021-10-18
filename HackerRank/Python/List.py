import array as arr
import math


class Myclass():

    def method1(self, a):
        m = list()
        for i in range(a):
            method, *l = input().split()
            k = list(map(int, l))
            if len(k) == 2:
                q = [k[0]]
                w = [k[1]]
            elif len(k) == 1:
                q = [k[0]]
            if method == 'insert':
                m.insert(q[0], w[0])
            elif method == 'append':
                m.append(q[0])
            elif method == 'remove':
                m.remove(q[0])
            elif method == 'print':
                print(m)
            elif method == 'reverse':
                m.reverse()
            elif method == 'pop':
                m.pop()
            elif method == 'sort':
                m.sort()


def main():
    c = Myclass()
    # a, b = map(int, input().split())
    n = int(input())
    c.method1(n)


if __name__ == "__main__":
    main()
