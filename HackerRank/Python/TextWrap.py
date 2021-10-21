import textwrap


string, max_width = input(), int(input())
print(textwrap.fill(string, max_width))
