def good_students(t1):
    new_str =""
    marks = 0
    for student in t1:
        marks += student[2]
    avrg = marks / len(t1)
    for student in t1:
        if student[2] == avrg:
            new_str += (f", {student[0]}")
            new_str_without_coma = new_str[1:]
    print(f"Студентите{new_str_without_coma} се справят добре този семестър")


t = (
    ('Иван', 20, 5.00, 'София'),  # Равен на средната
    ('Мария', 22, 6.00, 'Пловдив'),  # Над средната
    ('Георги', 21, 4.00, 'Варна'),  # Под средната
    ('Елена', 19, 5.50, 'Бургас'),  # Над средната
    ('Петър', 23, 5.00, 'Русе'),  # Равен на средната
    ('Николай', 20, 4.50, 'Ст. Загора'),  # Под средната
    ('Александра', 21, 5.00, 'София')
)
good_students(t)