n = int(input())

soma = 0

for i in range(2, n + 1):

    for k in range(2, i): 

        if i % k == 0:
            soma -= i
            break

    soma += i

print(soma)
