#Question:1 part b
with open('names.txt', 'r') as n:
    words = n.read().split() #reading the text file and assigning it to another variable 
    min_len = len(min(words, key=len)) #finding the minimium length of the name
    print ([a for a in words if len(a) == min_len])
    print("The length of shortest name is",min_len)