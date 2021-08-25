def menu():
    print("Please select the option")
    print("1. Burgers")
    print("2. Steaks")
    print("0. Exit")
menu()
option=int(input("Enter your option:"))
print()
while option!=0:
    if option==1:
        with open("Burgers.txt","r") as burgers: 
            print(burgers.read())
            print("Which Burger you want:\n")
            rows=[]
            with open("Burgers.txt",'r') as burgers:
                for  i in burgers:
                    rows.append(i.strip().split(" "))
            burger_option=int(input("Enter the number of the Burger form the Menu List:"))
            if burger_option==1:
                z_b=rows[2][3]
                z_b=z_b.split("/")
                z_b=int(z_b[0])
                name="Zinger Burger."
                print(name)
                a=int(input("Enter the amount of the Burgers"))
                if a<=5:
                    print("The quantity of Burgers are",a)
                    price=a*z_b
                else:
                    print("Please check your wallet first.")
            elif burger_option==2:
                z_c_b=rows[3][4]
                z_c_b=z_c_b.split("/")
                z_c_b=int(z_c_b[0])
                name="Zinger Cheese Burger."
                print(name)
                a=int(input("Enter the amount of the Burgers"))
                if a<=5:
                    print("The quantity of Burgers are",a)
                    price=a*z_c_b
                else:
                    print("Please check your wallet first.")
            elif burger_option==3:
                t_s_b=rows[4][4]
                t_s_b=t_s_b.split("/")
                t_s_b=int(t_s_b[0])
                name="Thames Special Burger."
                print(name)
                a=int(input("Enter the amount of the Burgers"))
                if a<=5:
                    print("The quantity of Burgers are",a)
                    price=a*t_s_b
                else:
                    print("Please check your wallet first.")
            elif burger_option==4:
                b_b=rows[5][3]
                b_b=b_b.split("/")
                b_b=int(b_b[0])
                name="Beef Burger."
                print(name)
                a=int(input("Enter the amount of the Burgers"))
                if a<=5:
                    print("The quantity of Burgers are",a)
                    price=a*b_b
                else:
                    print("Please check your wallet first.")
            elif burger_option==5:
                t_b=rows[6][3]
                t_b=t_b.split("/")
                t_b=int(t_b[0])
                name="Tower Burger."
                print(name)
                a=int(input("Enter the amount of the Burgers"))
                if a<=5:
                    print("The quantity of Burgers are",a)
                    price=a*t_b
                else:
                    print("Please check your wallet first.")
            elif burger_option==6:
                f_b=rows[7][3]
                f_b=f_b.split("/")
                f_b=int(f_b[0])
                name="Fish Burger."
                print(name)
                a=int(input("Enter the amount of the Burgers"))
                if a<=5:
                    print("The quantity of Burgers are",a)
                    price=a*f_b
                else:
                    print("Please check your wallet first.")
            elif burger_option==7:
                f_c_b=rows[8][4]
                f_c_b=f_c_b.split("/")
                f_c_b=int(f_c_b[0])
                name="Fish Cheese Burger."
                print(name)
                a=int(input("Enter the amount of the Burgers"))
                if a<=5:
                    print("The quantity of Burgers are",a)
                    price=a*f_c_b
                else:
                    print("Please check your wallet first.")
            elif burger_option==8:
                f_s_b=rows[9][4]
                f_s_b=f_s_b.split("/")
                f_s_b=int(f_s_b[0])
                name="Fire Stone Burger."
                print(name)
                a=int(input("Enter the amount of the Burgers"))
                if a<=5:
                    print("The quantity of Burgers are",a)
                    price=a*f_s_b
                else:
                    print("Please check your wallet first.")
            elif burger_option==9:
                c_b=rows[10][3]
                c_b=c_b.split("/")
                c_b=int(c_b[0])
                name="Crispy Burger."
                print(name)
                a=int(input("Enter the amount of the Burgers"))
                if a<=5:
                    print("The quantity of Burgers are",a)
                    price=a*c_b
                else:
                    print("Please check your wallet first.")
            elif burger_option==10:
                ch_b=rows[11][3]
                ch_b=ch_b.split("/")
                ch_b=int(ch_b[0])
                name="Chicken Burger."
                print(name)
                a=int(input("Enter the amount of the Burgers"))
                if a<=5:
                    print("The quantity of Burgers are",a)
                    price=a*ch_b
                else:
                    print("Please check your wallet first.")
            elif burger_option==11:
                ti_b=rows[12][3]
                ti_b=ti_b.split("/")
                ti_b=int(ti_b[0])
                name="Tikka Burger."
                print(name)
                a=int(input("Enter the amount of the Burgers"))
                if a<=5:
                    print("The quantity of Burgers are",a)
                    price=a*ti_b
                else:
                    print("Please check your wallet first.")
            elif burger_option==12:
                s_b=rows[13][3]
                s_b=s_b.split("/")
                s_b=int(s_b[0])
                name="Shami Burger."
                print(name)
                a=int(input("Enter the amount of the Burgers"))
                if a<=5:
                    print("The quantity of Burgers are",a)
                    price=a*s_b
                else:
                    print("Please check your wallet first.") #burger menu ends here
    elif option==2:
        with open("Steaks.txt","r") as steaks:
            print(steaks.read())
            col=[]
            with open("Steaks.txt",'r') as steak:
                for  i in steak:
                    col.append(i.strip().split(" "))
            print("Which Steak you want:\n")
            steak_option=int(input("Enter the number of the Steak form the Menu List:"))
            if steak_option==1:
                a_s=col[2][3]
                a_s=a_s.split("/")
                a_s=int(a_s[0])
                name="Arizona Steak."
                print(name)
                a=int(input("Enter the amount of the Steaks"))
                if a<=3:
                    print("The quantity of Steaks are",a)
                    price=a*a_s
                else:
                    print("Please check your wallet first.")
            elif steak_option==2:
                m_s=col[3][3]
                m_s=m_s.split("/")
                m_s=int(m_s[0])
                name="Mushroom Steak."
                print(name)
                a=int(input("Enter the amount of the Steaks"))
                if a<=3:
                    print("The quantity of Steaks are",a)
                    price=a*m_s
                else:
                    print("Please check your wallet first.")
            elif steak_option==3:
                p_s=col[4][3]
                p_s=p_s.split("/")
                p_s=int(p_s[0])
                name="Pepper Steak."
                print(name)
                a=int(input("Enter the amount of the Steaks"))
                if a<=3:
                    print("The quantity of Steaks are",a)
                    price=a*p_s
                else:
                    print("Please check your wallet first.")
            elif steak_option==4:
                po_s=col[5][3]
                po_s=po_s.split("/")
                po_s=int(po_s[0])
                name="Polo Steak."
                print(name)
                a=int(input("Enter the amount of the Steaks"))
                if a<=3:
                    print("The quantity of Steaks are",a)
                    price=a*po_s
                else:
                    print("Please check your wallet first.") #steak menu ends here
    else:
        print("invalide option")
    print()
    menu()
    option=int(input("Enter your option:")) 

print("Thanks!")
