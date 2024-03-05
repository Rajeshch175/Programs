#Reading a file

file=open('MyFile.txt','r')
text=file.read()
print(text)
file.close()

#Writing a file

file=open('MyFile.txt','a')
file.write('Hello Guru...!') 
file.close()

with open('MyFile.txt','a') as file:
    file.write("Hey i am inside with")

# Readline  

file=open('MyFile.txt','r')
while True:
    line=file.readline()
    if not line:
        break
    print(line)

# Writeline 

file=open('MyFile.txt','w')
lines={'line 1\n','line 2\n','line 3\n'}
file.writelines(lines)
file.close()

# Seek()

with open('MyFile.txt','r') as file:
    print(type(file))

    file.seek(10)
    print(file.tell())
    data=file.read(5)
    print(data)

# truncate

with open('MyFile.txt','w') as file:
    file.write('Hello World !')
    file.truncate(5)
     

