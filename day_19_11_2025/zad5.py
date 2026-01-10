def In_Circle(a,b,r):
    if (a*a+b*b) <= 4*r*r:
        return True
    else:
        return False


a = float(input())
b = float(input())
r = float(input())
while a < 0 or b < 0 or r < 0:
    a = float(input())
    b = float(input())
    r = float(input())
print(In_Circle(a,b,r))