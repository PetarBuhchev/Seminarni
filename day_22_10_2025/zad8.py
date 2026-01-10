NUM = int(input("Enter number: "))
while not 5<NUM<15:
    NUM = int(input("Enter number: "))

avrg_positive = 0
avrg_negative = 0
count_positive = 0
count_negative = 0
count_kratni_na_3_5 = 0
count_ostatak = 0

for i in range(NUM):
    number = float(input("Enter flaot number: "))
    if -100 <= number <= 100:
        if number < 0:
            count_negative += 1
        else:
            count_positive += 1
            if number % 6 == 3:
                count_ostatak += 1
            if number % 3 == 0 and number % 5 == 0:
                count_kratni_na_3_5 += 1

avrg_positive = count_positive / NUM
avrg_negative = count_negative / NUM
print(avrg_positive, avrg_negative)
print(count_positive, count_negative)
print(count_kratni_na_3_5)
print(count_ostatak)