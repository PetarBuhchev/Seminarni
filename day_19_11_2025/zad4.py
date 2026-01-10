def Abs_min(l):
    l.sort()
    minumum_sub = (l[0] - l[1])
    if minumum_sub < 0:
        minumum_sub *= -1
    for i in range(len(l)):
        for j in range(i + 1, len(l)):
            sub = l[i] - l[j]
            if sub < 0:
                sub *= -1
            if sub < minumum_sub:
                minumum_sub = sub
    print(minumum_sub)

l = [9,5,1,10,125,32894]
Abs_min(l)