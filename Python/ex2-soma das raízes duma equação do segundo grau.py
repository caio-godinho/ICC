import math

a = float(input())
b = float(input())
c = float(input())

delta = (b * b) - (4 * a * c)

if delta < 0:
    print('nan')

else:
    if a != 0:
        x1 = (-b + math.sqrt(delta)) / (2 * a)
        x2 = (-b - math.sqrt(delta)) / (2 * a)
        print('{:.2f}'.format(x1 + x2))
    else:
        print('nan')
