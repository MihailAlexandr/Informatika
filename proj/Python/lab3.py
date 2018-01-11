from math import log

formula = int(input("For exit press 0\nChoose the formula #1 #2 #3: "))
while (formula >= 0) and (formula <= 3):
    a = float(input("Enter a:"))
    min_x = float(input("Enter minx:"))
    max_x = float(input("Enter maxx:"))
    step = float(input("Enter steps:"))

    if formula == 1:
        x = min_x
        d = (-45*a**2+26*a*x+7*x**2)
        if d !=0:
            while x <= max_x:
                G = ((-7*(4*a**2+15*a*x-4*x**2))/d)
                print("x=%.3f \tG=%.3f" % (float(x), G))
                x += (max_x-min_x)/(step-1)
            break
        else:
            print("Err")

    elif formula == 2:
        x = min_x
        while x <= max_x:
            F = (2**(40*(a**2)-107*a*x+63*(x**2)))
            print("x=%.3f \tF=%.3f" % (float(x), F))
            x += (max_x-min_x)/(step-1)
        break

    elif formula == 3:
        x = min_x
        while x <= max_x:
            Y = log(a**2-2*a*x+3*x**2+1)
            print("x=%.3f \tY=%.3f" % (float(x), Y))
            x += (max_x-min_x)/(step-1)
        break
else:
    print("Err")