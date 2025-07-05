n = int(input())

nombre = ""
maximo = 0
suma = 0

for i in range(n) :
    s = input()
    num = int(input())
    
    if num > maximo :
        nombre = s
        maximo = num
    
    suma += num

print(f"Total en deudas: ${suma}")
print(f"La persona que más debe es {nombre}, con ${maximo}")
