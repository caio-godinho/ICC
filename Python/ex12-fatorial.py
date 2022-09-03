def fatorial(x):
    acumulador = 1

    for i in range(2, x + 1):
        acumulador *= i

    return acumulador

n = int(input())
print(fatorial(n))
