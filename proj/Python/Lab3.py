from math import log

form = 1

while form <=3 & form >= 1 :
    print("If you want exit press 0")
    form = int (input ("Choose the formula: "))

    if form == 1:
        x = int(input("Enter x:"))
        a = int(input("Enter a:"))
        G = (-7*(4*a**2+15*a*x-4*x**2))/(-45*a**2+26*a*x+7*x**2)
        print ("G={}".format(G))

    elif form == 2:
        x = int(input("Enter x:"))
        a = int(input("Enter a:"))
        F =(2**(40*(a**2)-107*a*x+63*(x**2)))
        print("F={}".format(F))

    elif form == 3:
        x = int(input("Enter x:"))
        a = int(input("Enter a:"))
        Y = log(-a**2-2*a*x+3*x**2+1)
        print("Y ={}".format(Y))

    else:
        print("XZ that is it ;(")
        break
