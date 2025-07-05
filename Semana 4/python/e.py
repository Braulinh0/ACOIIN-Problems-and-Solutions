n = int(input())

total = 0
for i in range(n) :
    name = input()
    
    if(name == "Ñoño") :
        tamales = int(input())
        if(tamales <= 3) :
            print(f"A Ñoño se le entregaron: {tamales} tamales.")
            total += tamales
        else :
            print(f"A Ñoño se le entregaron: 3 tamales.")
            total += 3
    else :
        tamales = int(input())
        print(f"A {name} se le entregaron {tamales} tamales.")
        total += tamales
        
print(f"En total se entregaron: {total} tamales.")
