n = int(input())

m = str(input())

l = [m]

z = []

for k in l[0]:
    if k != ' ':
        z.append(k)

for q in range(n):
    print(z[q], end=' ')
