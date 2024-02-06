'''
width = 10
Height = 5
area = 0
#print(width, Height, area)
hello_mensage = 'Olá mundo'
charactere_example = 'a'
_newFloat = 1.0
boolean_type = True
'''
'''
#print(charactere_example, _newFloat, boolean_type, hello_mensage)
#print(type(hello_mensage))
# Adição
print(5+23)

# Subtração
print(100-25)

# Multiplicação
print(5*10)

# Potência/Exponente
# o operador ** é equivalente ao expoente
print(5**2)

# 5*5 = 5^2 = 5**2 
print(5*5)


# Divisão (float)
# Retornar o valor decimal real da divisão
print(36/4)
print(10/3)         

# Divisão (int)
# Retornar um int. Se o quociente real for um valor decimal, apenas um número inteiro irá retornar
print(10//3)
print(19//6)

# Divisão Modular: retornar o restante da divisão
print(10%3)
'''
'''
print('fa' * 5)
print('da' * 5)
print('hello' + ' ' + 'world')
'''
#EXERCÍCIO 1: 
"""
EXERCÍCIO: implemente o exemplo de switch case acima usando as condições "if/else"1

Prompt: para cada dígito entre 0-9, o programa imprimirá uma confirmação 
para o valor inserido ou irá imprimir "invalid inputs" para todos os outros números.
"""
def switches(num):
    if(num == 0):
        print("Valor digitado: 0")
    elif(num == 1):
        print("Valor digitado: 1")
    elif(num == 2):
        print("Valor digitado: 2")
    elif(num == 3):
        print("Valor digitado: 3")
    elif(num == 4):
        print("Valor digitado: 4")
    elif(num == 5):
        print("Valor digitado: 5")
    elif(num == 6):
        print("Valor digitado: 6")
    elif(num == 7):
        print("Valor digitado: 7")
    elif(num == 8):
        print("Valor digitado: 8")
    elif(num == 9):
        print("Valor digitado: 9")
    else:
        print("Valor inválido")

def main():
    while True:
        num = int(input("Digite um numero ou -1 para sair: "))
        if(num < 0):
            print("Programa encerrado !")
            break
        else:
            switches(num)
            continue


main()