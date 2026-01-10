dic = {}
for i in range(7):
    niz = input("Enter a key: ")
    number = int(input())
    dic[niz] = number
print(dic)
max_value = -32156486972984
for value in dic.values():
    if value > max_value:
        max_value = value
print(max_value)
replaced_key = input("Enter a key: ")
if replaced_key in dic:
    replaced_value = int(input())
    dic[replaced_key] = replaced_value
deleted_key = input("Enter a key: ")
if deleted_key in dic:
    del dic[deleted_key]
added_key = input("Enter a key: ")
added_value = int(input())
dic[added_key] = added_value