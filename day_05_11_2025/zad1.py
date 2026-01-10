## Програма коят въвежда числа, колко елемента вкарва и ги записва в списък.
## Отпечатва елементите..
number_of_elements = int(input("Enter the number of elements: "))
while number_of_elements < 0:
    number_of_elements = int(input("Enter the number of elements: "))
l = []
for i in range(number_of_elements):
    number = int(input("Enter the number: "))
    l.append(number)
l3 = []
for x in range(number_of_elements):
    l3.append(l[x] * 3)
print(l)
print(l3)
print(l*3)
checked_num = int(input("Enter the checked number: "))
if checked_num in l:
    print("Yes the list contains the number")
else:
    print("The list does not contain the number")
l = sorted(l)
print(l)
print("The max number is: ",max(l))
removed_index = int(input("Enter the removed index: "))
if 0 <= removed_index < len(l):
    del l[removed_index]
else:
    print("The list does not contain that index")
replacement_old_element = int(input("Enter the old element: "))
if replacement_old_element in l:
    replacement_new_element = int(input("Enter the new element: "))
    for x in range(len(l)):
        if l[x] == replacement_old_element:
            l[x] = replacement_new_element