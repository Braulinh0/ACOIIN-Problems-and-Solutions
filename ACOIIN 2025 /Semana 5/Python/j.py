n, m = map(int, input().split())

matrix = []
for i in range(n):
    fila = input()
    matrix.append(fila)

direcciones = [(-1, 0), (1, 0), (0, -1), (0, 1)]
count = 0

for i in range(n) :
    for j in range(m) :
        if matrix[i][j] == 'T':
            puede_recoger = True
            
            for dx, dy in direcciones:
                ni, nj = i + dx, j + dy
                if (0 <= ni < n) and (0 <= nj < m):
                    if matrix[ni][nj] == 'F':
                        puede_recoger = False
                        break
                    
            if puede_recoger:
                count += 1

print(count)