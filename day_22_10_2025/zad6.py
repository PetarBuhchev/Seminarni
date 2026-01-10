sum_nums = 0
multi = 1
number = int(input())
while number != -99:
    if number >= 0:
        sum_nums += number
        multi *= number
    number = int(input())

print(f"{sum_nums};{multi}")
