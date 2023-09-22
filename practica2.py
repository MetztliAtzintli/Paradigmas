import math
#Funciones para convertir a mayusculas
print("Funciones para convertir a mayusculas: \n")
lista = ['hola','mundo','ayer','me','comi','un','waffle']
print(lista,"\n")

def mayusculas(lista):
    return lista.upper()

print (list(map(mayusculas,lista)))

resultado = list(map(lambda x: x.upper(), lista))
print(resultado,"\n")


#Funciones para calcular el cubo de un numero
print("Funciones para calcular el cubo de un numero: \n")

def cubo(num):
    return pow(num,3)
print (cubo(3))
    
cubo2 = lambda x: x ** 3
print(cubo2(3),"\n")

#Funcion lambda para resolver una ecuacion de 2do grado con Bhaskara
print("Funcion lambda para resolver una ecuacion de 2do grado con Bhaskara: \n")
Bhaskara = lambda a, b, c: (
    (-b + (b**2 - 4*a*c)**0.5) / (2*a),
    (-b - (b**2 - 4*a*c)**0.5) / (2*a)
)
a = 3
b = -11
c = -4
soluciones = Bhaskara(a, b, c)
print("Las soluciones son:", soluciones)
