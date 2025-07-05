n = int(input())

count1 = 0
count2 = 0

for i in range(n) :
    num = int(input())
    count1 += num
    
    if num > 3 :
        count2 += 1
        
print(f"Total de tortas vendidas: {count1}")
print(f"Clientes que compraron más de 3 tortas: {count2}")
