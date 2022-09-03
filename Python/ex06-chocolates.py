n = int(input())
c = int(input())
m = int(input())

quantidade = n // c
embalagens = quantidade

while embalagens >= m:
    quantidade += 1
    embalagens += 1
    embalagens -= m

print(quantidade)
