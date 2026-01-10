m = int(input("Enter the number of keys: "))
while m < 0:
    m = int(input("Enter the number of keys: "))
dic = {}
for i in range(m):
    key = input("Enter the key: ")
    value = input("Enter the value: ")
    dic[key] = value
find_the_key = input("Enter the searched key: ")
if find_the_key in dic.keys():
    print("The key is real.")
replaced_value_key = input("Enter the key of the replaced value: ")
if replaced_value_key in dic.keys():
    replaced_value = input("Enter the replaced value: ")
    dic[replaced_value_key] = replaced_value
deleted_element = input("Enter the deleted key: ")
if deleted_element in dic.keys():
    del dic[deleted_element]
for key in dic.keys():
    print(key)
for value in dic.values():
    print(value)
sorted_dic = {}
for key in sorted(dic.keys()):
    sorted_dic[key] = dic[key]
print(dic)