# We import the math library to use the ceil function
import math
def get_nth_tweet(str,n):
    # at first we calculate the length of the actaul tweet
    size=len(str)
    # Then we calculate the number of sub_tweets that can be created by dividing the total length by 50 which is the size of each subtweet
    number_of_sub_tweets=math.ceil((size/50))
    # Then we create a sub tweets array which has subtweets of size 50..This contains all the subtweets and also the last subtweet which can be less than 50 characters
    sub_tweets=[str[i:i+50] for i in range(0,size,50)]
    # If the input number is greater than the number of tweets the we return an empty string
    if n>number_of_sub_tweets:
        return ''
    # Else we return the nth subtweet
    return sub_tweets[n-1]

print(get_nth_tweet("loremLorem ipsum dolor sit amet, consectetur adipisicing elit. Earum iusto eos, odio ut neque quam, beatae sed corrupti quod vitae similique ratione labore praesentium porro debitis unde error reprehenderit, id aliquid nostrum quasi harum nam incidunt minus? Aperiam id esse tempore? Perferendis quaerat praesentium quos quasi maxime perspiciatis facilis magni iusto expedita recusandae suscipit ex eos, minima cupiditate eum asperiores libero id? Quis similique, expedita alias voluptatem dolorem, ratione sequi, itaque dolor exercitationem eum enim incidunt iste impedit vel? Quo, repudiandae rerum quam, enim necessitatibus aperiam voluptates sint nam incidunt eius doloribus ut, magnam hic corrupti iste odio aspernatur aliquam.",5))

print(get_nth_tweet("loremLorem ipsum dolor sit amet, consectetur adipisicing elit. Earum iusto eos, odio ut neque quam, beatae sed corrupti quod vitae similique ratione labore praesentium porro debitis unde error reprehenderit, id aliquid nostrum quasi harum nam incidunt minus? Aperiam id esse tempore? Perferendis quaerat praesentium quos quasi maxime perspiciatis facilis magni iusto expedita recusandae suscipit ex eos, minima cupiditate eum asperiores libero id? Quis similique, expedita alias voluptatem dolorem, ratione sequi, itaque dolor exercitationem eum enim incidunt iste impedit vel? Quo, repudiandae rerum quam, enim necessitatibus aperiam voluptates sint nam incidunt eius doloribus ut, magnam hic corrupti iste odio aspernatur aliquam.",200))

print(get_nth_tweet('Hello World',1))
