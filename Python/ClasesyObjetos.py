
class Galleta:
    chocolate = False
    pass

galleta_oreo = Galleta()
galleta_choki = Galleta()
#print(type(galleta_choki))

galleta_choki.sabor = "Dulce"
print(galleta_choki.sabor)


print(galleta_oreo.chocolate)

galleta_oreo.chocolate = True
print(galleta_oreo.chocolate)


class Galleta2():
    chocolate = False
    
    def __init__(self):
        print("Se creo una galleta")
        
    def chocolatear(self):
        self.chocolate = True #Poner self

    def chocochoco(self):
        if self.chocolate:
            print("Chocochoco")
        else:
            print("No Chocochoco")
        
g = Galleta2()
g.chocolatear()
g.chocochoco()
print(g.chocolate)


class Galleta3():
    chocolate = False
    
    def __init__(self,sabor,color=None):
        self.color = color
        self.sabor = sabor
        print(f"Se creo una galleta de color {color} y sabor {sabor}")
        
    def chocolatear(self):
        self.chocolate = True #Poner self

    def chocochoco(self):
        if self.chocolate:
            print("Chocochoco")
        else:
            print("No Chocochoco")
    def __del__(self):
        print("Se esta borrando la galleta")

    def __str__(self):
        return self.sabor
    
    def __len__(self):
        return self.color
        
g = Galleta3("chocolate", "cafe")
g2 = Galleta3("chocolate")
del(g2) #la borro antes de lo demas
print(str(g2))
print(len(g2))

#g.chocolatear()
#g.chocochoco()
#print(g.chocolate)

