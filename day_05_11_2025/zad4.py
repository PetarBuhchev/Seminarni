m = int(input("Enter the number: "))
s = set()
s1 = set()
for i in range(m):
    number = int(input("Enter the number: "))
    s.add(number)
print(s)
for i in range(m):
    number = int(input("Enter the number: "))
    s1.add(number)
print(len(s))
print(len(s1))
print(s|s1)
print(s-s1)
print(s&s1)
deleted_element = int(input("Enter the number: "))
if deleted_element in s:
    s.remove(deleted_element)
del s
del s1