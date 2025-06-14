n = int(input("Ingrese un número: "))

if n > 0 and n % 2 == 0 :
    print("Luz en el camino.\n")
elif n > 0 and n % 3 == 0 :
    print("El sendero es incierto.\n")
elif n < 0 and n % 7 == 0 :
    print("Oscuridad profunda.\n")
elif n < 0 and n % 7 != 0 :
    print("Peligro al acecho.\n")
else :
    print("Equilibrio eterno.\n")
