n = int(input())

s = []

for p in range(n):
    if p < 2:
        s.append(1)

    else:
        s.append(s[-1] + s[-2])

for e in range(n):
    print(s[e], end=' ')
