class People():
    def __init__(self, lastname, experience, salary):
        self.lastname = lastname
        self.experience = experience
        self.salary = salary
    def __str__(self):
        return f'{self.lastname}, {self.experience}, {self.salary}'
class Child(People):
    def __init__(self, lastname, experience, salary, job_title):
        super().__init__(lastname, experience, salary)
        self.job_title = job_title
    def __str__(self):
        return f'{self.lastname}, {self.experience}, {self.salary}, {self.job_title}'

def Input_data_for_number_of_people(number,l):
    number = int(number)
    for i in range(number):
        lastname, experience, salary = input().split(" ")
        person = People(lastname, int(experience), int(salary))
        l.append(person)
    return l
def Input_data_for_one_person(lastname, l, job_title):
    for i in range(len(l)):
        if l[i].lastname == lastname:
            job = input()
            child = Child(l[i].lastname, l[i].experience, l[i].salary, job)
            l.remove(l[i])
            l.append(child)
            break
    return l
def Print_main_data(l):
    for i in range(len(l)):
        print(l[i].lastname, l[i].experience, l[i].salary)
def Find_the_person_with_min_salary(l):
    min = int((max(l, key=lambda x: x.salary)).salary)
    index_person = -1
    for i in range(len(l)):
        if l[i].salary < min:
            min = l[i].salary
            index_person = i
    print(f"Човека с най-ниска заплата е {l[index_person].lastname}")
def Find_the_person_with_max_experience(l):
    min = int((max(l, key=lambda x: x.experience)).experience)
    index_person = -1
    for i in range(len(l)):
        if l[i].excepience < min:
            min = l[i].experience
            index_person = i
    print(f"Най-старият човек е {l[index_person].lastname}")
def Delete_person(l, lastname):
    exist = False
    for i in range(len(l)):
        if l[i].lastname == lastname:
            exist = True
            l.remove(l[i])
            return l
    if not exist:
        print("Няма намерен такъв човек, моля въведете командата отново и въведете друга фамилия!")
        return l
def Delete_all(l):
    l = []
    return l
def Sort_by_experince(l):
    l.sort(key=lambda x: x.experience)
    return l
def Output_the_jobs(l):
    jobs = []
    for i in range(len(l)):
        jobs.append(l[i].job_title)
    jobs = set(jobs)
    print(jobs)
def Avrg_for_under_35_experience(l):
    count = 0
    avrg = 0
    for i in range(len(l)):
        if l[i].experience < 35:
            count += 1
            avrg += l[i].salary
    if count == 0:
        print("Няма хора във списъка под 35 години стаж")
    avrg /= count
    print(avrg)

command = input()
l = []

while command.lower() != "end":
    if command == 'Въвеждане на данни за брой хора':
        try:
            number = input()
            if not number.isdigit():
                raise ValueError("Tрябва да въведете число!")
            elif int(number) < 0:
                raise ValueError("Числото трябва да е по-голямо от нула!")
        except ValueError as ve:
            print("Error")
            print(ve)
        else:
            number = int(number)
            l = Input_data_for_number_of_people(number, l)
    elif command == "Добавяне на данни на един човек":
        lastname, job = input().split(",")
        l = Input_data_for_one_person(lastname, l, job)
    elif command == "Извеждане на основни данни":
        Print_main_data(l)
    elif command == "Намиране на човека с най-ниска заплата":
        Find_the_person_with_min_salary(l)
    elif command == "Намиране на най-стария човек":
        Find_the_person_with_max_experience(l)
    elif command == "Изтриване на един човек":
        lastname = input()
        l = Delete_person(l, lastname)
    elif command == "Изтриване на всички въведени хора":
        Delete_all(l)
    elif command == "Сортиране на данните по стаж":
        l = Sort_by_experince(l)
    elif command == "Извеждане на данните за позициите":
        Output_the_jobs(l)
    elif command == "Изчисляване на средната заплата на хората под 35 години":
        Avrg_for_under_35_experience(l)

    command = input()

for i in l:
    print(i)