nota1 = float(input("Digite a sua nota 1: "))
nota2 = float(input("Digite a sua nota 2: "))
media = (nota1+nota2)/2
    
if (media >= 7.0) :
    print("Parabéns, sua nota foi boa, e voce esta de férias !!")
    print('Sua média: %.1f' %(media))
elif ((media < 7.0) & (media >= 4.0)):
    print('Infelizmente voce esta de recuperação, se esforce mais e conseguirá !!')
    print('Sua média: %.1f' %(media))
elif(media < 4.0):
    print('Infelizmente voce esta reprovado !!')
    print('Sua media: %.1f' %(media))