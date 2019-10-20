# This list contains all the propositions that you dont want to get uppercase
prepositions = ['THE', 'IN', 'OF','I']
# Input the string
str = input("Enter the string")
# Replace the '-' with ' -' for easily splitting
str = str.replace('-', ' -')
# Splitting the words now
words = str.split()

output = ''
i = 0
# Looping through all the words
while i < len(words):
    if words[i]=='I':
        output+=words[i]+' '
        i=i+1
    # Check if the first word is a - then add it to the output
    if words[i][0] == '-':
        output += '-'
        words[i] = words[i][1:]
    # If its a lowercase word the keep it as it is
    if not words[i].isupper():
        output += words[i]+' '
        i=i+1
    else:
        # Add the underscore and then capitalise the word
        output += '_'+words[i].capitalize()+' '
        i += 1
        # Now run the loop till all the uppercase words are appended
        while i < len(words) and words[i].isupper():
            # Make them lowercase if they are prepositions
            if words[i] not in prepositions:
                output += words[i].capitalize()+' '
            else:
                output += words[i].lower()+' '
            i += 1
        # Add another underscore at the end
        output += '_'
# Replcaing the extra space and dots and dashes
output = output.replace(' _', '_').replace(' -','-').replace('._','_. ')

print(output)
