lista = []

for i in range(3):
    R = int(input())
    G = int(input())
    B = int(input())
    nome = str(input())

    tupla = (nome, R, G, B)

    lista.append(tupla)

lista2 = sorted(lista)
print(lista2)

n = int(input())quit

if 0 <= n <= 2:

    x = lista2[n][1]
    y = lista2[n][2]
    z = lista2[n][3]

    C = (0.5*x) + (0.3*y) + (0.2*z)

    print('%s: %d' % (lista2[n][0].title(), round(C)))

else:
    exit()
