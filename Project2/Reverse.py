input1 = input("Enter the phrase you want to invert: ")
#tomo el dato del usuario
output2 = input1.split()
#uso el método split para dividir en espacios en blanco
output2.reverse()
#invierto los elementos
print(' '.join(output2))
#ya invertido imprimo mis datos