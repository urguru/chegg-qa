# Returns the number of words
def number_of_words(contents):
    contents.strip()
    return len(contents.split())

# Returns the number of characters
def number_of_characters(contents):
    contents=contents.strip().split()
    count=0
    for word in contents:
        count+=len(word)
    return count


# Returns the character count of each letter given as input
def char_count(char,contents):
    count=0
    for character in contents:
        if character==char:
            count+=1
    return count

# Returns the frequency of all the words in the file
def word_count(contents):
    contents.strip()
    contents=contents.split()
    words_freq={}
    for word in contents:
        words_freq[word]=words_freq.get(word,0)+1
    return words_freq

# Used for calculating the frequency of each letter
letters="abcdefghijklmnopqrstuvwxyz"

# File names being asked from user
input_file=input("Enter the name of the input file : ")
output_file=input("Enter the name of the output file : ")

# Reading the contents of the file
infile=open(input_file,"r")
contents=infile.read()

# Converting all the characters to lower case
contents=contents.lower()


total_words=number_of_words(contents)
total_characters=number_of_characters(contents)


a_count=char_count("a",contents)
b_count=char_count("b",contents)
c_count = char_count("c", contents)
d_count = char_count("d", contents)
e_count = char_count("e", contents)


a_freq=(a_count/total_characters)*100
b_freq = (b_count/total_characters)*100
c_freq = (c_count/total_characters)*100
d_freq = (d_count/total_characters)*100
e_freq = (e_count/total_characters)*100



words_freq=word_count(contents)

# Counting the frequency of all the letters
letters_count={}
for character in letters:
    letters_count[character]=0
    for letter in contents:
        if character==letter:
            letters_count[character]+=1

# Writing the output to the output file
outfile=open(output_file,"w+")
outfile.write("The ocurences of each letter in the given file are as follows\n")
for key,value in letters_count.items():
    outfile.write("{} : {}\n".format(key,value))
outfile.write("\n\nThe frequency percentage of a in the file is {}".format(a_freq))
outfile.write("\nThe frequency percentage of b in the file is {}".format(b_freq))
outfile.write("\nThe frequency percentage of c in the file is {}".format(c_freq))
outfile.write("\nThe frequency percentage of d in the file is {}".format(d_freq))
outfile.write("\nThe frequency percentage of e in the file is {}".format(e_freq))
outfile.write("\n The number of words in the file is {}".format(total_words))
outfile.write("\n\nThe ocurences of each word in the given file are as follows\n")
for key,value in words_freq.items():
    outfile.write("{} : {}\n".format(key,value))
outfile.write("\n\nThe total number of characters in the file are : {} ".format(total_characters))

# Closing both the files
outfile.close()
infile.close()


