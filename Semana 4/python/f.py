n = int(input())

count = 0
suma = 0
for i in range(n) :
    m = int(input())
    
    if m >= 1 and m <= 10 :
        suma += m
        count += 1
    else :
        continue

if count == 0 :
    print("No hay calificaciones válidas.")
else :
    print(f"El promedio de los episodios es: {round(suma / count, 1)}")
