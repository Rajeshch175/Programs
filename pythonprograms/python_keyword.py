# def hello(first,middle,last):
#     print("Hello"+first+" "+middle+" "+last)

# #hello("code","dude","bro")
# hello(last="code",middle="dude",first="Bro")


#kwargs

def hello(**kwargs):
    print("Hello"+kwargs['first']+" "+kwargs['last'])
    print("Hello",end=" ")
    for key,value in kwargs.items():
        print(value,end=" ")


hello(title="Mr",first="BRO",middle="DUDE",last="CODE")

