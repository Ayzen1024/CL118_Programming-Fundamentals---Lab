#Question:1 part f
def printline(x):             #This Function is used to reads in the names in names.txt and prints all the names that have the length given as a parameter.    
    x+=1
    names=["Saad","Osaid","Waqas","Huzaifa","Uzair","Sohail","Ahmad",'Kashif',"Abdullah","Faheem"]
    print_names=[]
    with open("names.txt",'w') as f:
        for i in names:
            f.write(i+"\n")
    with open("names.txt",'r') as f:
        lines = f.readlines()
        for i in lines:
            if len(i)==x:
                print_names.append(i[:-1])
            
    return print_names

print (printline(5))
            