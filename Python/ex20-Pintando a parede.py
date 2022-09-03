import math
l = float(input())
a = float(input())
c = float(input())
m = float(input())

area = l * a

quantidade = area / m

custo = math.ceil(quantidade) * c

print('{:.0f}'.format(math.ceil(quantidade)))
print('{:.2f}'.format(custo))
