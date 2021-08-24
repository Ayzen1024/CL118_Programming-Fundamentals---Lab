def hcf(x, y):
        m = 0
        a= x
        b= y
        if a > b:
            m = b
        else:
            m = a
        for i in range(1, m+1):
            if((a % i == 0) and (b % i == 0)):
                hcf = i 
        return hcf 
g=hcf(12,14)
print("The H.C.F is:",g)