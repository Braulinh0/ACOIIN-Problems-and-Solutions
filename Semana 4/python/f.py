t = int(input())

count = 0
suma = 0
for i in range(t) :
    n = int(input())
    
    if n >= 1 and n <= 10 :
        suma += n
        count += 1
    else :
        continue

if count == 0 :
    print("No hay calificaciones válidas.")
else :
    print(f"El promedio de los episodios es: {round(suma / count, 1)}")
