n, m = map(int, input().split())

matrix = []

for i in range(n):
    fila = input().split()
    matrix.append(fila)

ans = 0

for i in range(n):
    for j in range(m):
        if matrix[i][j] == "Chavo":
            ans += 1
            
print(ans)