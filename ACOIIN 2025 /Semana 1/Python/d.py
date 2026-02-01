total = 0

for i in range(0, 5) :
    a = int(input())
    b = int(input())
    c = int(input())
    
    ans = a + b + c
    total += ans
    
    print(f"Dia {i + 1}: ${ans}")
    
print(f"Total semanal: ${total}")
print(f"Promedio por dia: ${total / 5}")
