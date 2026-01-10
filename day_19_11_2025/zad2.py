def Mediana(l):
    l.sort()
    if len(l) % 2 == 1:
        count = 0
        print(f"{l[(len(l) // 2)]:.2f}")
    else:
        print(f"{(l[(len(l)// 2)-1] + l[(len(l)// 2)])/2:.2f}")


l = [9,5,1,125,32894]
Mediana(l)