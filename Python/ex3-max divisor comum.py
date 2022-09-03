a = int(input())
b = int(input())

if a >= b:
    for c in range(1, b + 1):
        if a % c == 0 and b % c == 0:
            mdc = c
    print(mdc)

else:
    for c in range(1, a + 1):
        if a % c == 0 and b % c == 0:
            mdc = c
    print(mdc)
