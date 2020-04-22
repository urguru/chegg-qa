# This function reads the file and then returns the text
# I have copied the programming html text in the python_wikipedia.html file
def read_file():
    infile = open('python_wikipedia.html', 'r', encoding="utf8")
    text=infile.read()
    return text

# I find the count of all the tags and other strings mentioned in the question here
text=read_file()
p_tags=text.count('<p>')
line_break_tags=text.count('<br>')
div_opening_tag=text.count('<div')
anchor_tag=text.count('<a href')
double_quotes=text.count("\"")
single_quotes=text.count("\'")
less_than=text.count('<')
ampersand=text.count('&')
code_tag=text.count('<code>')
img_tag=text.count('<img')
title=text.count('title')

# Printing the values found here
print("<p> count : {} ".format(p_tags))
print("<br> count : {} ".format(line_break_tags))
print("<div count : {} ".format(div_opening_tag))
print("<a href count : {} ".format(anchor_tag))
print(''' " count : {} '''.format(double_quotes))
print(" ' count : {} ".format(single_quotes))
print(" < count : {} ".format(less_than))
print(" & count : {} ".format(ampersand))
print("<code> count : {} ".format(code_tag))
print("<img count : {} ".format(img_tag))
print("title count : {} ".format(title))


# Finding the first time <title> tag was discovered
# Finding the first time </title> tag was discovered
i=text.find('<title>')
j=text.find('</title>')
# Storing the title present in the tag in the title_text
# I have added 7 to i because the length of the tile tag is 7
title_text=text[i+7:j]
print("The title text is {}".format(title_text))