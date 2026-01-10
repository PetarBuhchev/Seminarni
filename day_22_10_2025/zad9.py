num1 = int(input("Enter number n: "))
poslednaTsifra = num1%10
petaTsifra = (num1//10)%10
chetvartaTsifra = (num1//100)%10
tretaTsifra = (num1//1000)%10
vtoraTsifra = (num1//10000)%10
parvaTsifra = (num1//100000)%10

num2 = parvaTsifra*1 + vtoraTsifra*10 + tretaTsifra*100 + chetvartaTsifra*1000 + petaTsifra*10000 + poslednaTsifra * 100000
print(num2)