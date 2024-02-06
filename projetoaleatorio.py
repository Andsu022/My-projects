import random
n1 = str(input("Digite o nome do grupo 1: "))
n2 = str(input("Digite o nome do grupo 2: "))
n3 = str(input("Digite o nome do grupo 3: "))
n4 = str(input("Digite o nome do grupo 4: "))
lista = [n1, n2, n3, n4]
random.shuffle(lista)
print(" A ordem da apresentação dos grupos será: ")
print(lista)