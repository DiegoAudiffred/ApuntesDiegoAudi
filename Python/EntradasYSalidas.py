t = "Holi me llamo Audi"
n = 666
print("Texto",t,"Numero",n)

c = "Texto {} Numero {}".format(t,n)
print(c)

c = "Texto {1} Numero {0}".format(t,n)
print(c)

c = "Texto {Texto} Numero {Numero}".format(Texto=t,Numero=n)
print(c)

print("{:>30}".format("asd"))

print("{:30}".format("asd"))

print("{:^30}".format("asd"))

print("{:.3}".format("Adios"))


print("{t:>30.3}".format(t=t))

print("{:4d}".format(10))
print("{:4d}".format(100))
print("{:4d}".format(1000))

print("{:04d}".format(10))
print("{:04d}".format(100))
print("{:04d}".format(1000))

print("{:07.2f}".format(3.141626))
print("{:07.2f}".format(152.162))

print("{:7.2f}".format(3.141626))
print("{:7.2f}".format(152.162))

nombre = "Sexoclaudius"

cadena = f"Holi {nombre}"
print(cadena)

a, b = 5, 10
print(f"A + B es {a} + {b} es {a+b}")

def Audi():
    return "Audi"

print(f"Holi {Audi()}")