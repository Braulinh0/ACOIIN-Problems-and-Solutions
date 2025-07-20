# Tipos de variables
strings = "Hola Mundo"
booleano = True # o = 1
enteros = int(input())
flotante = float(input())

temp1 = int(input())
temp2 = float(input())

# Operaciones matematicas

a = 5
b = 15

resta = a - b
suma = a + b
multiplicacion = a * b
division = a // b
division2 = a / b
potencia = a ** b
modulo = a % b

print(modulo)
print("Division entera:", division)
print("Division decimal:", division2)

# Loops o ciclos
n = 5

print("Ciclo for:\n")
for i in range(n) :
    print(i)
    
print("Ciclo while:\n")
while n < 15 :
    print(n)
    n += 1
    
# Listas (leer una lista de tamaño n)
lista = list(map(int, input().split()))[:n]

for i in lista :
     print(i) # va printeando el elemento de la lista con subconjunto [i]
     
# 1. Ordenar de mayor a menor una lista

print(lista) # <- lista desordenada

lista.sort() # <- ordenamiento de la lista (de menor a mayor)

print(lista) # <- lista ordenada

# 2. De mayor a menor

print(lista) # lista desordenada

lista.sort(reverse = True) # <- ordenamiento de la lista (de mayor a menor)

print(lista) # lista ordenada

# máximo y minimo elemento de una lista

temp1 = max(lista) # <- obtiene el elemento máximo
temp2 = min(lista) # <- obtiene el elemento minimo

# matriz N * M

n, m = map(int, input().split())

matriz = []

for i in range(n) :
    fila = list(map(int, input().split())) # lectura de la fila [i]
    matriz.append(fila) # añadimos la fila [i] a la matriz
    
print()

for i in range(n) : # <- lectura de cada fila de la matriz
    for j in range(m) : # <- lectura de cada columna de la matriz
        print(matriz[i][j], end = " ")
        # 2 2 <- tamaño de la matriz
        # 1 2
        # 3 4
        
        # print
        # 1 2
        # 3 4
        
    print() # salto de línea cada vez que el segundo ciclo anidado (j), finaliza su recorrido
    
#-------------------------------------------------
   
# printeo de una matriz de adelante para atrás
for i in range(n - 1, -1, -1) :
    for j in range(m - 1, -1, -1) :
        print(matriz[i][j], end = " ")
    print()
