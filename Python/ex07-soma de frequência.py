#def soma(x, y):
    #sum = 0

    #for i in range(x, y + 1):
        #sum += i
    #return sum

def soma(x, y):
    #Fórmula da soma de todos os números entre x e y:
    # abs() para pegar o módulo de (y - x), pois se  y < x então o resultado será negativo e subtrairá o 1.
    sum = (x + y) * (abs(y - x) + 1) // 2

    return(sum)

a = int(input())
b = int(input())

print(soma(a, b))
