def calender(year):
    if leap % 4 == 0 and leap % 100 != 0 or leap % 400 == 0:
        print("It is a leap year")
    else:
        print("it is not a leap year")
leap=int(input("Enter the Year"))
calender(leap)
