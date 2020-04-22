# The definition of the function
def returnLetterCount(aString,letterToFind):
    # We keep a track for counting the number of occurences of lettertofind 
    count=0
    for character in aString:
        # If the character is equal to the lettertofind we increment count by 1
        if character==letterToFind:
            count+=1
    return count
print(returnLetterCount("ababa","a"))
print(returnLetterCount("sasabbbbbcccccrererere","s"))
print(returnLetterCount("qwerty","q"))
print(returnLetterCount("apple","s"))