#CSC120Lab08Template
# CSC120
# Lab 08 Template

names = ["Euclid", "Archimedes", "Newton", "Descartes", "Fermat","Turing", "Euler", "Einstein", "Boole", "Fibonacci", "Lovelace","Noether", "Nash", "Wiles", "Cantor", "Gauss", "Plato"] # Initial list n == 17
# we will use alphaCount to store the number of characters in names.
# alphaCount[0] will contain the number of A and a
# alphaCount[1] will contain the number of B and b
# ….
# …
# # alphaCount[25] will contain the number of Z and z
alphaCount = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
for name in names:
    new_name=name.lower()
    for character in new_name:
        alphaCount[ord(character)-ord('a')]+=1
