n, m = map(int, input().split())

matriz = []
for i in range(n):
    fila = list(map(int, input().split()))
    matriz.append(fila)

print()

for i in range(n):
    for j in range(m):
        print(matriz[i][j], end = " ")
    print()
