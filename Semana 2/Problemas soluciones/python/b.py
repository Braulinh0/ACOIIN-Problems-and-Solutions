# estructura:
    # map('tipo de datos', input().split())

q1, q2, q3 = map(str, input().split())

temp = 0
if q1 == "si":
    temp += 1
if q2 == "si":
    temp += 1
if q3 == "si":
    temp += 1
    
if temp == 3:
    print("Resultado: Puede pasar.")
elif temp == 2 or temp == 1:
    print("Resultado: Debe ser interrogado.")
else :
    print("Resultado: ¡Intruso imperial!")