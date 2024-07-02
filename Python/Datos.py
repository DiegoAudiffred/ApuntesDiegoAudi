#Tupla
tupla = (1,["asd","asd2"],-50,"adios")
print(tupla)
print(len(tupla[1])) #longuitud dentro
print(tupla.index(1)) #busca el index del elemento
print(tupla.count(-50)) #contar cantidad
#Conjuntos
conjunto = set() #convierte a conjunto
conjunto2 = {1,2,3} #conjunto
conjunto2.add(4)
conjunto2.add(0)
print(conjunto2)
conjunto2.add('A')
print(conjunto2)
conjunto2.add('Z')
conjunto2.add('H')
print(conjunto2)
print('Z' in conjunto2)
print('Z' not in conjunto2)
conjunto2.add('Z')
print(conjunto2)

lista = [1,2,3,4,5,1,2,3,4,5]
cast = set(lista)
print(cast)

l = list(cast)
print(l)

a = "Agua de OwO con sabor a UwU"
print(set(a))
#Mapa
vacio = {}
colores = {'amarillo':'yellow','verde':'green','rojo':'red'}
print(colores['amarillo'])
colores['amarillo'] = 'white'
print(colores['amarillo'])
del(colores['amarillo'])
print(colores)

edades = {'amarillo':50,'verde':30,'rojo':10}
edades['amarillo']+=10
print(edades['amarillo'])

for edad in edades:
    print(edades[edad])
    
for c,v in edades.items():
    print(c,v)
    
#Pila
pila = [3,4,5]
pila.append(6)
pila.append(7)
print(pila.pop())

#Cola
from collections import deque
cola = deque()
cola = deque(['Diego','Audi','Fred'])
print(cola)
cola.append('Mayo')
cola.append('Ral')
print(cola)
cola.popleft()
print(cola)
