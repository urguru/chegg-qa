# Definition of the function
def print_shape(n):
    # This for loop prints the top portion of the shape
    for i in range(n):
        # This loop prints the \ for i=0 it prints \ i=1 it prints \\ for i=2 it prints \\\
        for j in range(i+1):
            print('\\', end='')
        # This loop prints the stars..for i=n-1 it prints * i=n-2 prints *** for i=n-3 it prints *****
        for j in range(2*n-2*i-1):
            print('*', end='')
        # This loop prints the \ for i=0 it prints \ i=1 it prints \\ for i=2 it prints \\\
        for j in range(i+1):
            print('\\', end='')
        #This prints a newline feed 
        print()
    # This loop prints the middle line 
    for i in range(2*n+1):
        print('0', end='')
    #This prints a newline feed
    print()
    # This prints everything in the bottom section of the shape
    # Most of the loops here are opposite to the one in the above
    for i in range(n):
        for j in range(n-i):
            print('/', end='')
        for j in range(2*i+1):
            print('*', end='')
        for j in range(n-i):
            print('/', end='')
        print()
print_shape(4)
print('\n\n\n')
print_shape(3)
print('\n\n\n')
print_shape(2)
print('\n\n\n')
print_shape(1)
