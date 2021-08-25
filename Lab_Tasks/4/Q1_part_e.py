#Question:1 part e
ls=["Saad","Osaid","Waqas","Huzaifa","Uzair","Sohail","Ahmad",'Kashif',"Abdullah","Faheem"] #taking list 
ls2=[] # empty list
with open("names.txt",'w') as f:
    for i in ls:
        f.write(i+"\n")  # writting in the list
with open("names.txt",'r') as f:
    lines = f.readlines()
    for i in lines:
            ls2.append(i[:-1]) 
with open("names_subj.txt",'w') as f: # creating a new text file
    for i in ls2:
        f.write(i+":  Pak Studies,Applied Physics\n")
f=open("names_subj.txt","r")
print(f.read())