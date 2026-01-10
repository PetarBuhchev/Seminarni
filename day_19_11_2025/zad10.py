def sleve(l):
    s1 = set(l)
    print(s1)
    l1 = list(s1)
    l1.sort()
    print(l1)
    for index in range(len(l1)-1, -1, -1):
        print(l1[index])

l = [1,1,2,4,6,6,7,0,10,4584]
sleve(l)