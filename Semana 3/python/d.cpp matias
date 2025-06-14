n = int(input("Ingresa la medida de la matriz: "))

matriz = []

for i in range(n) :
    fila = list(map(int, input().split(" ")))
    matriz.append(fila)

diagonal = True

for i in range(n) :
    for j in range(n) :
        if i != j and matriz[i][j] != 0:
            # print(i, j, matriz[i][j])
            diagonal = False
            break
        
if diagonal:
    print("La matriz es diagonal.\n")
else :
    print("La matriz no es diagonal.\n")
