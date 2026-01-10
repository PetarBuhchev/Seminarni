how_many_numbers = int(input("How many numbers do you want? "))
while how_many_numbers < 0:
    how_many_numbers = int(input("Enter a correct number: "))
count_even = 0
count_odd = 0
max_even = -9223372036854775808
min_odd = 9223372036854775807

for i in range(how_many_numbers):
    number = int(input("Number: "))
    if number % 2 == 0:
        count_even += 1
    else:
        count_odd += 1
    if number > max_even:
        max_even = number
    if number < min_odd:
        min_odd = number

print("The number of even numbers is:", count_even)
print("The number of odd numbers is:", count_odd)
print("The maximum even number is:", max_even)
print("The minimum odd number is:", min_odd)