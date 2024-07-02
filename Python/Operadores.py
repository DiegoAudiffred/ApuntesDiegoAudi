if (2 == 2):
    print("Verdadero")
    
if (3 != 2):
    print("Verdadero")
    
if (3 > 2):
    print("Verdadero")
    
if (2 < 3):
    print("Verdadero")
    
if (3 >= 2):
    print("Verdadero")
    
if (2 <= 3):
    print("Verdadero")

casa = "Agua"
    
if (casa[0] == "A"):
    print("Verdadero A")
    
lista = [1,2,3]
    
if (lista[0] == 1):
    print("Verdadero 1")
    
if (lista[0] == 1 and lista[1 == 2]):
    print("Verdadero 12")
    
if (lista[0] == 1 or lista[1 == 3]):
    print("Verdadero 12x2")

a = 15
if (a > 10 and not a == 20):
    print("Verdadero 3.1416")
   
if (a > 10 or not a == 6):
    print("Verdadero 3.1416")
    
a +=5
a**=2
print(a)


while a >= 200:
    print(a)
    a -= 50
    if (a==200):
        print("Ya quedo")
        break
else:
    print("Acabo")
    
    
while a >= 200:
    print(a)
    a -= 50
    if (a==200):
        print("Ya quedo")
        continue
else:
    print("Acabo")
    
numeros=[1,2,3,4,5]
for numero in numeros:
    print(numero)
    

for numero in [6,7,8,9,10]:
    print(numero)
    


    
numeros2=[1,2,3,4,5,6,7,8,9,19]
for indice,numero in enumerate(numeros2):
    numeros2[indice] +=5    
    print(indice,numero)
    
    
cadena="Holiwis"
cadena2=""
for caden in cadena:
    cadena2 += caden*2
print(cadena2)


cadena2+="asd"
print(cadena2)

for i in range(10):
    print(i)
    
print(list(range(10)))


numero=7
sumatorio = 0

# Completa el ejercicio aquí
for num in range(numero):
    if(num % 5 !=0 and num % 7 !=0 ):
        sumatorio += num
print(sumatorio)

lista = ["Hola",1,"Adios",2,[1,2,3]]
print(lista[-1][0])

listado = ["Esto es una cadena",(1,2,3,4,5),["Azul","Verde","Rojo"]]
print(listado[2][0])

matriz = [
    [8,  7,  0],
    [34, 2, -1],
    [5, -5, 12]
]          
for i,fila in enumerate(matriz):
    for j,columna in enumerate(fila):
        if matriz[i][j] % 2 == 0:
            matriz[i][j] = 0
        else:
            matriz[i][j] = 1