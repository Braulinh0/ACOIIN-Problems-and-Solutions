q1 = str(input("Ingresa si o no: "))
q2 = str(input("Ingresa si o no: "))
q3 = str(input("Ingresa si o no: "))

total = 950
temp = 950

if q1 == "no" :
    temp -= 500
    
if q2 == "no" :
    temp -= 300
    
if q3 == "no" :
    temp -= 150

if q1 == "si" and q2 == "si" and q3 == "si" :
    print(f"Total a pagar: ${total - (total * 0.1)}")
elif q1 == "no" and q2 == "no" and q3 == "si" :
    print(f"Total a pagar: ${temp + 50}")
else :
    print(f"Total a pagar: ${temp}")