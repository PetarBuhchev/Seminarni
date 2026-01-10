number = int(input("Enter a number: "))
while number < 0:
    number = int(input("Enter a number: "))
dic = {}
for i in range(number):
    key = input("Enter a key: ")
    value = input("Enter a value: ")
    dic[key] = value
added_key = input("Enter added key: ")
added_value = input("Enter added value: ")
dic[added_key] = added_value
deleted_key = input("Enter deleted key: ")
del dic[deleted_key]
print(dic)
searched_key = input("Enter a key: ")
if searched_key in dic:
    print(dic[searched_key])
sorted_dic = {}
for key in sorted(dic.keys()):
    sorted_dic[key] = dic[key]
print(sorted_dic)