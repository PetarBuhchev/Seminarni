def Deliteli(number):
    new_list = []
    for n in range(1,number+1):
        if number % n == 0:
            new_list.append(n)
    return new_list

number = int(input())
print(Deliteli(number))