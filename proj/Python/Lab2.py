from math import log

formula = int(input("Choose the formula: "))
x = int(input("Enter x:"))
a = int(input("Enter a:"))

if formula == 1:
    G = (-7*(4*a**2+15*a*x-4*x**2))/(-45*a**2+26*a*x+7*x**2)
    print ("G={}".format(G))

elif formula == 2:
    F =(2**(40*(a**2)-107*a*x+63*(x**2)))
    print ("F={}".format(F))

elif formula == 3:
    Y = log(-a**2-2*a*x+3*x**2+1)
    print("Y ={}".format(Y))

else:
    print("XZ that is it")
