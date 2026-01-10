def Repeated(l):
    for index in range(len(l)):
        for j in range(index+1,len(l)):
            if index != j:
                if l[index] == l[j]:
                    print(l[index])


l = ['apple', 'apple', 'fjeig', 'banana', 'banana', 'fjeig', 'orange', 'strawberry']
Repeated(l)