#Question:1 part d
with open('names.txt', 'r') as n:
    sum_of_length =0
    for i in n:
        sum_of_length+= len(i) -1
n=open("names.txt","r")
z=len(n.read().split())
z
avg=sum_of_length/z
avg
print("The Average of the lengths of the names in names.txt is",avg)
n.close()