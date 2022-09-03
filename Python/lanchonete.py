comando = int(input())
total = 0
vendas = 0

if comando == 1:
    nome = str(input())
    quantidade = int(input())
    valor = float(input())

    pedidoi = [nome, quantidade, valor]
    pedidos = [pedidoi]
    price = quantidade * valor
    total += price

while 1:
    comando = int(input())

    if comando == 0:
        break

    else:
        nome = str(input())
        quantidade = int(input())
        valor = float(input())

        pedidoi = [nome, quantidade, valor]
        pedidos.append(pedidoi)
        price = quantidade * valor
        total += price

print("Pedidos não entregues: R$ %.2f" % total)
print("Vendas: R$ %.2f" % vendas)