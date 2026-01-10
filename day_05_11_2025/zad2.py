number_of_elements = int(input("Enter the number of elements: "))
l = []
for i in range(number_of_elements):
    element = input("Enter the element: ")
    l.append(element)
print(l)
max_length = 0
index_of_max = -1
for element in range(number_of_elements):
    if len(l[element]) > max_length:
        max_length = len(l[element])
        index_of_max = element
if (index_of_max != -1):
    print(f"The biggest element is on index {index_of_max} and is {max_length} characters long.")
else:
    print("It looks like there is no biggest element.")
replaced_string = input("Enter the replaced string: ")
if replaced_string in l:
    new_string = input("Enter the new string: ")
    for x in range(len(l)):
        if l[x] == replaced_string:
            l[x] = new_string
            break
else:
    print("There is no such a string in the list.")
deleted_string = input("Enter the deleted string: ")
if deleted_string in l:
    l.remove(deleted_string)
added_string = input("Enter the added string: ")
added_index = int(input("Enter the added index: "))
if 0 <= added_index < len(l):
    l.insert(added_index, added_string)
else:
    print("You cannot insert value on that index. Please run the program again and try again")
