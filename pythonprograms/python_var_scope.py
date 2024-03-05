#name="Rajesh"
#def display_name():
#    name="code"
#    print(name)
#display_name()
#print(name)


#ARGS

def add(*stuff):
    sum=0
    stuff=list(stuff)
    stuff[0]=0
    for i in stuff:
      sum=sum+i
    return sum
print(add(1,2,3,4,5))



