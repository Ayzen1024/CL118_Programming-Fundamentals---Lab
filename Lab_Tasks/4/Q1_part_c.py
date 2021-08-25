#Question:1 part c
with open('names.txt', 'r') as n: # This function is use to find the sum of the lengths of the names in names.txt.
    sum_of_length =0
    for i in n:
        sum_of_length+= len(i) -1
    print("The total length of the Names is:", sum_of_length)
        