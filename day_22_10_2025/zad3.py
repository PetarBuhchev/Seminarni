n = float(input("Enter number n: "))
m = float(input("Enter number m: "))

while n>m or n==m:
    n = float(input("Enter number n: "))
    m = float(input("Enter number m: "))

number = float(input("Enter a number: "))

if n <= number <= m:
    print("The number is in the range")
else:
    print("The number is not in the range")