def long_words(s):
    l=s.split(" ")
    empty=[]
    n=int(input("Enter the number which will we test you"))
    for i in l:
        if len(i)>n:
            empty.append(i)
    return empty
s=input("Enter the sentence")
long_words(s)





