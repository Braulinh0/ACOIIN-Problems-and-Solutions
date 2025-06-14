n = int(input("Ingrese la cantidad de planetas que quieres leer: "))
planetas = []

for i in range(0, n) : 
    planeta = input(f"Ingrese el planeta {i + 1}: ")
    planetas.append(planeta)
    
contador = 0
vocales = ['A', 'E', 'I', 'O', 'U']

for i in range(0, n) : 
    if planetas[i][0] in vocales :
        contador += 1
        
print(contador)
