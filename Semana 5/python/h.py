n = int(input())

matrix = []

for i in range(n) :
    fila = list(map(int, input().split()))
    matrix.append(fila)
    
ans = 0

for i in range(n - 1, -1, -1) :
    for j in range(n - 1, -1, -1) :
        if i == j :
            ans += matrix[i][j]
        else :
            continue
        
print(ans)