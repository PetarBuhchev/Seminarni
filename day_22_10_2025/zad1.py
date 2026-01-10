##Да се напише програма която намира сумата и средно аритме. на четните и на нечетните числа като елементите се вкарват от потребителя

number_of_elements = int(input("Enter the number of elements: "))
while number_of_elements <= 0:
    number_of_elements = int(input("Enter correct number of elements: "))

sum_even = 0
sum_odd = 0
avrg_even = 0
avrg_odd = 0
count_even = 0
count_odd = 0
for i in range(number_of_elements):
    number = int(input("Enter the number: "))
    if number % 2 == 0:
        sum_even += number
        count_even += 1
    else:
        sum_odd += number
        count_odd += 1

avrg_even = sum_even / count_even
avrg_odd = sum_odd / count_odd

print("The sum of even numbers is:", sum_even)
print("The sum of odd numbers is:", sum_odd)
print("The average of even numbers is:", avrg_even)
print("The average of odd numbers is:", avrg_odd)