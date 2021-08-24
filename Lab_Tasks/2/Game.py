print("<== Welcome to the Rock - Paper - Scissor Game ==>\n")
def game_1():
    print("Player#1 enter your name:")
    a=str(input())
    print(a,"what will you choose:")
    print("1. Rock.")
    print("2. Paper.")
    print("3. Scissor.")
def game_2():
    print("Player#2 enter your name:")
    b=str(input())
    print(b,"what will you choose:")
    print("1. Rock.")
    print("2. Paper.")
    print("3. Scissor.")
while True: 
    game_1()
    p1_option=int(input("Enter your option:\n"))
    if p1_option==1:
        print("You have Chosen Rock.\n")
        p1_opt = 'Rock'
    elif p1_option==2:
        print("You have Chosen Paper.\n")
        p1_opt = 'Paper'
    elif p1_option==3:
        print("You have Chosen Scissor.\n")
        p1_opt = 'Scissor'
    else:
        print("invalide option")
    print()
    game_2()
    p2_option=int(input("Enter your option:\n"))
    if p2_option==1:
        print("You have Chosen Rock.\n")
        p2_opt = 'Rock'
    elif p2_option==2:
        print("You have Chosen Paper.\n")
        p2_opt = 'Paper'
    elif p2_option==3:
        print("You have Chosen Scissor.\n")
        p2_opt = 'Scissor'
    print( p1_opt," V/s ", p2_opt )
    if((p1_option == 1 and p2_option == 2) or (p1_option == 2 and p2_option == 1 )): 
        print("Congratulations Paper wins!")           
    elif((p1_option == 1 and p2_option == 3) or (p1_option == 3 and p2_option == 1)): 
        print("Congratulations Rock wins!") 
    elif((p1_option == 2 and p2_option == 3) or (p1_option == 3 and p2_option == 2)): 
        print("Congratulations Scissor wins!") 
    else: 
        print("It's a tie!\n")
    print("Do you want to play again? (Yes/No)") 
    ans = input()  
    if ans == 'No' or ans=='no' or ans == 'N' or ans=='n': 
        break

print("\nThanks for playing this Game....!!")
