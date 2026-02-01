n = int(input())

b = int(input())
lista_negra = []
for i in range(b) :
    s = input()
    lista_negra.append(s)

t = int(input())
vip = []
for i in range(t) :
    s = input()
    vip.append(s)

count = 0
for i in range(n) :
    s = input()
    ans = input()
    if s in lista_negra :
        continue
    
    if s in vip :
        count += 1
        continue
    
    if ans == "si" :
        count += 1
    
print(count)