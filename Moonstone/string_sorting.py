# This is to take the input of all the lines once..We need to press enter once more to end the input
lines = []
while True:
    s = input()
    if s:
        lines.append(s)
    else:
        break

for i in range(len(lines)):
    # This removes the spaces and splits the line with the help of ':'
    # So we have all the numbers as elements of the list
    # We remove the string from the beginning and append it at the end
    lines[i]=lines[i].replace(" ","").split(':')[1:]
    num=i+1
    lines[i].append('String '+str(num))
# The sorted function in python sorts the elements based on their values So 10 will be smaller than 100 here
sorted_lines=sorted(lines)
# Since we stored the string index in the last position we print that
for line in sorted_lines:
    print(line[-1])