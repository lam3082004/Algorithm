# import math
# a, b= map(int, input().split())
n =input()
# def digital_root(n):
#     x = sum(int(digit) for digit in str(n))
#     if x < 10:
#         return x
#     else:
#         return digital_root(x)

print(sum(int(digit) for digit in str(n)))
