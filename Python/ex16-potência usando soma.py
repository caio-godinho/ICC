a = int(input())
b = int(input())

potencia = a
soma = a

if b == 0:
    print(1)

else:
    for i in range(1, b):
        for k in range(1, a):
            potencia += soma

        soma = potencia

    print(potencia)
