how_many_numbers = int(input("Enter how many nums do you want: "))
n = float(input("Enter number n: "))
m = float(input("Enter number m: "))
while n>m or n==m:
    n = float(input("Enter number n: "))
    m = float(input("Enter number m: "))

count_nums = 0
sum_nums = 0
for i in range(how_many_numbers):
    number = float(input("Enter number: "))
    if n<number<m:
        count_nums += 1
        sum_nums += number

print(count_nums)
print(sum_nums)