ano = int(input())

if ano > 0:
    if ano % 4 == 0 and ano % 100 != 0:
        print(1)
    else:
        print(0)

else:
    print(-1)
