# This fucntion takes a dictionary as the input and then prints the values in the dictionary 
def print_board(board):
    i=0
    print("-------------")
    for key,value in board.items():
        print("| {} ".format(value),end="")
        i=i+1
        # If we have printed 3 elements then we move to the next line
        if i%3==0:
            print("|")
            print("-------------")
# This function contains the whole game play
def play_game():
    # First we define a dictionary called board to store all the key value pairs in the dictionary
    board={}
    # Then we populate all the places in the dictionary with _ which means that they are empty
    for i in range(1,10):
        board[i]='_'
    # The variable turns keeps the count of how many turns have been played.The total number of turns that can be played is 9
    turns=0
    # This variable is a boolean variable that tells whose turn it is
    play1=True
    # As long as turns are not 9 keep playing
    while turns<9:
        # Rows and columns are used for indexing the location where the user want to enter the input
        row=0
        col=0
        place=0
        # If the player1 is true its player1's turn or its player2's turn
        if play1:
            print("Player 1's turn")
            # We take the inputs from the user
            row=int(input("Enter the row(1-3) :"))
            col=int(input("Enter the col(1-3) :"))
            # Then we calculate the index number
            place=(row-1)*3+col
            # If the input given is wrong then we repeat the input statements again
            # The place shouldnt be already filled
            # The row and column index shouldnt be out of range
            if row>3 or row<1 or col>3 or col<1 or board[place]=='X' or board[place]=='O':
                print("Wrong Input.Play Again")
                continue
            # If there arent any errors then we place the user's input
            board[place]='X'
            # We make the user's turn to false to allow the other player to play
            play1=False
            # We print the board every time a user plays
            print_board(board)
        # Player2's turn
        else:
            print("Player 2's turn")
            row=int(input("Enter the row(1-3) :"))
            col=int(input("Enter the col(1-3) :"))
            place=(row-1)*3+col
            if row>3 or row<1 or col>3 or col<1 or board[place]=='X' or board[place]=='O':
                print("Wrong Input.Play Again")
                continue
            board[place]='O'
            play1=True
            print_board(board)
        turns=turns+1
    print("All places filled...")

# We call the play_game function which takes care of the inputs and printing the board
play_game()


