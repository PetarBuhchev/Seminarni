l = [5,21,20,60,90,32,7,33,15, 36]
l2 = [x for x in l if x % 2 == 0 and x % 3 == 0 and 10 <= x <= 99]
print(l2)