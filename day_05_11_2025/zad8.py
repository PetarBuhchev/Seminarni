inputed = 'ab bc ab bd ab be'
inputed_list = 'ab bc ab bd ab be'.split(" ")
count_ab = 0
for i in range(len(inputed_list)):
    if inputed_list[i] == 'ab':
        count_ab += 1
for i in range(len(inputed)):
    if inputed[i] == 'b':
        inputed[i] == 'a'
    elif inputed[i] == 'a':
        inputed[i] == 'b'