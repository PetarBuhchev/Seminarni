num1 = int(input("Enter number: "))
while num1 < 10000 or num1 > 99999:
    num1 = int(input("Enter correct number:"))

poslednaTsifra = num1%10
chetvartaTsifra = (num1//10)%10
tretaTsifra = (num1//100)%10
vtoraTsifra = (num1//1000)%10
parvaTsifra = (num1//10000)%10

print(f"{parvaTsifra};{vtoraTsifra};{tretaTsifra};{chetvartaTsifra};{poslednaTsifra}")
print(parvaTsifra+vtoraTsifra+tretaTsifra+chetvartaTsifra+poslednaTsifra)
print(parvaTsifra*vtoraTsifra*tretaTsifra*chetvartaTsifra*poslednaTsifra)
