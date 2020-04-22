# Function to add a single point to the already existing score of the player
def freeThrowMade(playerDictionary,playerName):
    playerDictionary[playerName]=playerDictionary.get(playerName,0)+1

# Function to add  two points to the already existing score of the player
def twoPointMade(playerDictionary,playerName):
    playerDictionary[playerName]=playerDictionary.get(playerName,0)+2

# Function to add three points to the already existing score of the player
def threePointMade(playerDictionary,playerName):
    playerDictionary[playerName]=playerDictionary.get(playerName,0)+3

players={}

while True:
    print("\n(1) Add Free Throw")
    print("(2) Add Two Pointer")
    print("(3) Add Three Pointer")
    print("(4) Display Statistics")
    print("(5) EXit")
    choice=int(input("Select a menu option: "))
    if choice==1:
        name=input("\nEnter the player's name: ")
        freeThrowMade(players,name)

    elif choice==2:
        name = input("\nEnter the player's name: ")
        twoPointMade(players, name)

    elif choice==3:
        name = input("\nEnter the player's name: ")
        threePointMade(players, name)

    elif choice==4:
        count=0
        score=0
        print("")
        for key,value in players.items():
            print("{}: {}".format(key,value))
            count+=1
            score+=value
        print("Number of players: {}".format(count))
        print("Average score per player: {}".format(score/count))
        print("Total Score: {}".format(score))
    
    elif choice==5:
        print("\nGoodbye")
        break

    else:
        print("\nInvalid menu choice")
