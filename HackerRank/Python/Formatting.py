def print_formatted(number):
    # your code goes here
    # String Formatting in Python - HackerRank Solution START
    for i in range(1, number+1):
        binlen = len(str(bin(number)))
        octf = oct(i).split('o')
        hexf = hex(i).split('x')
        binf = bin(i).split('b')
        print(i, octf[1], hexf[1].upper(), binf[1])
    # String Formatting in Python - HackerRank Solution END


if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
