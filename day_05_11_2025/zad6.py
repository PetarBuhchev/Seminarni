number = int(input("Enter a number: "))
while number < 0:
    number = int(input("Enter a number: "))
l = []
for i in range(number):
    town = input("Enter a town: ")
    l.append(town)
deleted_town = input("Enter a deleted town: ")
if deleted_town in l:
    del l[l.index(deleted_town)]
inserted_town = input("Enter a inserted town: ")
l.append(inserted_town)
print(l)
l = sorted(l)
searched_town = input("Enter a searched town: ")
if searched_town in l:
    print("It is in the list")
else:
    print("It is not in the list")
l1 = [1,2,3,4,5,6]
print(l+l1)