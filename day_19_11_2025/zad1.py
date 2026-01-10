## Дефинираме функ. , списък от числа, провери дали това число е по-голямо от сумата на всички преди него
def Check_Bigger_Before(l):
    if len(l) > 1:
        for index in range(1,len(l)):
            sum = 0
            for i in range(index):
                sum += l[i]
            if sum < l[index]:
                print(l[index])
    else:
        print("Въведеният лист е прекалено кратък!")
l = [1]
Check_Bigger_Before(l)