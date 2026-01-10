def Expensive(dic):
    biggest = 0
    biggest_key = ""
    for key in dic.keys():
        if dic[key] > biggest:
            biggest = dic[key]
            biggest_key = key
    print(biggest_key)

dic = {'gold': 3800, 'silver': 2000, 'platinum': 8000, 'bronze': 1900}
Expensive(dic)