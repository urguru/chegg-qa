def showTheater(seats):
    print("\nAvailable Theater Seating")
    # We need to go in reverse order for the range so we go from 8 till 0
    for r in range(8,-1,-1):
        for c in range(0,10):
            if seats[r][c]==99:
                print(" X  ",end='')
            else:
                print(("${} ".format(seats[r][c])),end='')
        print()
# This function checks if all the seats are booked...
# If even a single seat is not booked it reutrns false
def allSeatsTaken(seats):
    for r in range(8,-1,-1):
        for c in range(0,10):
            if seats[r][c]!=99:
                return False
    return True

# This is the assignmnet of the cost per seat
seats=[ [ 30, 40, 50, 50, 50, 50, 50, 50, 40, 30 ], [ 20, 30, 30, 40, 50, 50, 40, 30, 30, 20 ],[ 20, 20, 30, 30, 40, 40, 30, 30, 20, 20 ], [ 10, 10, 20, 20, 20, 20, 20, 20, 10, 10 ],[ 10, 10, 20, 20, 20, 20, 20, 20, 10, 10 ], [ 10, 10, 20, 20, 20, 20, 20, 20, 10, 10 ],[ 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 ], [10, 10, 10, 10, 10, 10, 10, 10, 10, 10 ],[ 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 ] ]

# As long as all the seats are not taken keep repeating the loop
while allSeatsTaken(seats)==False:
    showTheater(seats)
    print("\n\nPick a seat by row and then column or <q> to quit: ")
    seatRow=input()
    # If the user has entered a q then come out of the while loop
    if seatRow=='q':
        break
    # We take the row and the column value
    seatRow=int(seatRow)
    seatColumn=int(input())
    seatRow=seatRow-1
    seatColumn=seatColumn-1
    # If the user has given out of bounds value we specify seat[5][5] for them
    if seatRow>8 or seatRow<0:
        seatRow=5
    if seatColumn>9 or seatColumn<0:
        seatColumn=5
    # The booked seat is assigned with the value of 99 and if its already 99 then we prompt the user to take another seat
    if seats[seatRow][seatColumn]==99:
        print("\nThat seat is taken, choose another")
    else:
        seats[seatRow][seatColumn]=99
    # If all the seats are taken then we print that the theater is sold out
    if allSeatsTaken(seats)==True:
        showTheater(seats)
        print("\nThe theater is Sold Out!")
print("\nThank you ... !!")
