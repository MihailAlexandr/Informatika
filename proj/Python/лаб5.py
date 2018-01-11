from math import log

result = []
str_result = ""

formula = int(input("For exit press 0\nChoose the formula #1 #2 #3: "))
while (formula >= 0) and (formula <= 3):
    a = str(input("Enter a:"))
    a = float(a)
    min_x = str(input("Enter minx:"))
    min_x = float(min_x)
    max_x = str(input("Enter maxx:"))
    max_x = float(max_x)
    step = str(input("Enter steps:"))
    step = int(step)
    x = min_x

    if formula == 1:
        d = (-45*a**2+26*a*x+7*x**2)
        if d !=0:
            for i in range(step):
                while x <= max_x:
                    G = ((-7*(4*a**2+15*a*x-4*x**2))/d)
                    result.append(G)
                    print("x=%.3f \tG=%.3f" % (float(x), G))
                    x += (max_x-min_x)/(step-1)
                    str_result += str(G)
            break
        else:
            print("Err")

    elif formula == 2:
        for i in range(step):
            while x <= max_x:
                F = (2**(40*(a**2)-107*a*x+63*(x**2)))
                result.append(F)
                print("x=%.3f \tF=%.3f" % (float(x), F))
                x += (max_x-min_x)/(step-1)
                str_result += str(F)
        break

    elif formula == 3:
        for i in range(step):
            while x <= max_x:
                Y = log(a**2-2*a*x+3*x**2+1)
                result.append(Y)
                print("x=%.3f \tY=%.3f" % (float(x), Y))
                x += (max_x-min_x)/(step-1)
                str_result += str(Y)
        break
else:
    print("Err")
print("Max.res. = ", max(result))
print("Min.res. = ", min(result))

print("string", str_result)
shablon = str(input("Shablon:"))
print(str_result.count(shablon))