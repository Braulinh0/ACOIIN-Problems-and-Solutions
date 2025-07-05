t = int(input())
aux = t

lista = []
while t > 0 :
    n = int(input())
    
    suma = 0
    for i in range(0, n) :
        num = int(input())
        suma += num
    
    lista.append(suma)
    t -= 1

for i in range(aux) :
    print(f"Equipo {i + 1} hizo {lista[i]} goles.")
