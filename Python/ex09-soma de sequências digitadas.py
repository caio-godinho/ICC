n = 1
somapares = 0
somaimpares = 0
somatotal = 0

while n != 0:
    n = int(input())

    somatotal += n

    if n % 2 == 0:
        somapares += n

    else:
        somaimpares += n

print('{}\n{}\n{}'.format(somapares, somaimpares, somatotal))
#print('%d\n%d\n%d' % (somapares, somaimpares, somatotal))
