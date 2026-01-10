n = int(input("Enter number n: "))
while n <= 0:
    n = int(input("Enter number n: "))

for i in range(n):
    number = float(input("Enter number {}: ".format(i+1)))
    power = int(input("Enter number power: "))
    print("Powered number: ", number**power)
    print("Power: ", power)

print("Numbers: ", n)