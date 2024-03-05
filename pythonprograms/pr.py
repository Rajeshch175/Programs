n=int(input(""))
a=[]
for i in range(0,n):
    b=int(input(""))
    a.append(b)

for i in range(1,n+2):
    if(i not in a):
        print(i)
        break
    else:
        continue
    