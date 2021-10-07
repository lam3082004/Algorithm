class Myclass():
    def method1(self, a):
        print(a)

    def method2(self, a, b):
        print(a+b)


def main():
    c = Myclass()
    c.method1(3)
    c.method2(3, 5)


if __name__ == "__main__":
    main()
