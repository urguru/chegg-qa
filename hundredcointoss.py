import random
# this function returns true or false when we get exactly 50 heads or not
def hundredCoinToss():
    # This keeps the heads count
    hcount=0
    # We loop 100 times
    for i in range(100):
        # This gives either 0 or 1
        # 1=Head
        # 0=toss
        # If it is 1 we increase the head count
        if random.randint(0,1)==1:
            hcount+=1
    #If head count is 50 we return true or else false 
    return hcount==50
# This fucntion runs the trials for n number of times
def trials(n):
    # correct keeps track of the number of times the 50 toss of head is true
    correct=0
    for i in range(n):
        if hundredCoinToss():
            correct+=1
    # We return the probability of the result
    return (correct/n)

def main():
    # We run the loop for how many ever powers of 10 we want 
    for i in range(10):
        print("Trials : {} average successes : {}".format(pow(10,i),trials(pow(10,i))))

# Run the file as a stand alone program when it is called
if __name__=='__main__':
    main()