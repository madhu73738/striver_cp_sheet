a= input()
min1=9
c=0
for i in a:
    
    if (i!="9") :
       
        min2= min((int(i),(9-int(i))))
        print(min2,end='')
    elif  (i=="9")and c>0:
        print(0,end='')
    else:
        print(9,end='')
    c+=1