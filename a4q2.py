# Taking the input for the filename
filename = input("Enter the name of the file that you want to work upon : ")
# Opening the file for reading
infile = open(filename, 'r')
# Taking all the words into the words list
words = infile.read().split()
# Finding the length of the list words
word_count = len(words)
# Finding the length of the maximum sized words
max_len_word = len(max(words, key=len))
#  Finding the length of the minimum sized words
min_len_word = len(min(words, key=len))
# Declaring two sets one each for the minimum and the maximum sized words
max_words = set()
min_words = set()
# This variable below is to keep track of the total length of all the words
total_len = 0
# Loop through all the words
for word in words:
    # If the size of the word is the max_size then add it to the max_words list
    if len(word) == max_len_word:
        max_words.add(word)
    # If the size of the word is the min_size then add it to the min_words list
    if len(word) == min_len_word:
        min_words.add(word)
    total_len += len(word)
# Find the average length by dividing the number of words to the total number of character in the word
avg_len = int(total_len/word_count)
# Printing the results
print("The total number of words in the file {} is {}".format(filename, word_count))
print("The list of the words of maximum length are :",end=" ")
for word in max_words:
    print(word,end=", ")
print("\nThe list of the words of minimum length are :",end=" ")
for word in min_words:
    print(word,end=", ")
print("\nThe average length of the words in the file is {}".format(avg_len))
# Closing the file at the end
infile.close()
