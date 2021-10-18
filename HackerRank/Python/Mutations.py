# Mutations in Python - HackerRank Solution
def mutate_string(string, position, character):
    # Mutations in Python - HackerRank Solution START
    l = list(string)
    l[position] = character
    string = ''.join(l)
    return string

    # Mutations in Python - HackerRank Solution END
if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)
