a, b, c = map(int, input().split())

A = True
B = True
C = True

if a < 7 :
    A = False
    
if b < 7 :
    B = False
    
if c < 7 :
    C = False

if A and B and C :
    print("Resultado: ¡Aprobado como Jedi!")
elif A and B or B and C or A and C :
    print("Resultado: Necesita mas entrenamiento.")
else :
    print("Resultado: No esta listo.")