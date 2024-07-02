numeros = [1,2,3,4]

datos = ["Hola",1,"Ayuda",2]
print(datos[0]) #Hola

print(datos[:2]) #['Hola', 1]

numeros=numeros + [5,6,7,8] 
print(numeros) #[1, 2, 3, 4, 5, 6, 7, 8]
numeros[0] = 8
numeros[7]= 0
print(numeros) #[8, 2, 3, 4, 5, 6, 7, 0]

numeros.append(9)
print(numeros) #[8, 2, 3, 4, 5, 6, 7, 0, 9]

letras = ["a","b","c","d","e"]
print(letras) #['a', 'b', 'c', 'd', 'e']
letras[:3] = ["A","B","C"]
print(letras) #['A', 'B', 'C', 'd', 'e']
letras[:3] = []
print(letras) #['d', 'e']
print(len(letras)) #2


a = [1,2,3]
b=[4,5,6]
c=[7,8,9]

d = [a,b,c]
print(d)#[[1, 2, 3], [4, 5, 6], [7, 8, 9]]

print(d[0][2]) #3
print(d[1]) #[4, 5, 6]
print(d[-1][-1]) #3