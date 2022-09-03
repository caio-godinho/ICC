def fatorial(k):
    acumulador = 1

    for i in range(1, k + 1):
        acumulador *= i

    return acumulador

def soma(x):
    acumulador2 = 0

    for k in range(1, x + 1):
        acumulador2 += fatorial(k)

    return (acumulador2 + 1)

n = int(input())

print(soma(n))
