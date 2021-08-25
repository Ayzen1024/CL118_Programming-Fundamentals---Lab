#Question:1 part a
with open("names.txt","r") as n: #opening the text file 
    for l in n:
        print(l.strip()[0:4])