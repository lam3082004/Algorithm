import collections

n = int(input())
scol = ','.join(input().split())
Student = collections.namedtuple('Student', scol)

# print(Student)
sum = 0
for i in range(n):
    row = input().split()
    student = Student(*row)
    sum += int(student.MARKS)

print(sum/n)
