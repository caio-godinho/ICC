q = int(input())

n = int(input())
maior = n
menor = n
soma = n

for i in range (q - 1):

    n = int(input())

    soma += n

    if n > maior:
        maior = n

    if n < menor:
        menor = n

print(maior)
print(menor)
print(soma)
