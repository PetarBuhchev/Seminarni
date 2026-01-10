def Half_The_Fruit(fruits):
    new_list = []
    for fruit in fruits:
        new_word1 = ""
        new_word2 = ""
        if len(fruit) % 2 == 0:
            for i in range(0, len(fruit)//2):
                new_word1 += fruit[i]
            for i in range(len(fruit)//2, len(fruit)):
                new_word2 += fruit[i]
        elif len(fruit) % 2 == 1:
            for i in range(0, len(fruit)//2+1):
                new_word1 += fruit[i]
            for i in range(len(fruit)//2+1, len(fruit)):
                new_word2 += fruit[i]

        new_list.append(new_word1)
        new_list.append(new_word2)
    new_list.sort()
    return new_list

fruits = ['apple', 'fjeig', 'banana', 'orange', 'strawberry']
print(Half_The_Fruit(fruits))