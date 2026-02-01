total = 0
for i in range(0, 3) :
    a = int(input())
    b = int(input())
    
    ans = a * b
    total += ans
    
    print(f"Ganancia concierto {i + 1}: ${ans}")
    
print(f"Total ganado en la gira: ${total}")