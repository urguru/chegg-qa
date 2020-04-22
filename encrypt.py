class login:
    
    def __init__(self, id, pas,flag):

        self.id = id

        self.pas = pas

        self.flag=flag

    def check(self, id, pas):

        # print( self.id)

        if self.id == id and self.pas == pas:

            self.flag=1

            print ("Login success!")
            print()
            print("WELCOME TO CAESAR/VIGINERE CIPHER")
            print()
            print("Select an option")

        else:

            self.flag=0

            print("login Failed")

log = login("user", "admin",1)

log.check(input("Enter Username:"),

        input("Enter Password: "))

if(log.flag==1):
    import base64
    import hashlib
    from distutils.log import Log
    from crypto import random

    # lower case alphabets
    key1 = 'abcdefghijklmnopqrstuvwxyz'

    # upper case alphabets
    key2 = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

    # encrypt function for caesar
    def encrypt(plaintext, n):
        result = ''

        # visit each character in the plaintext
        for l in plaintext:
            try:
                # if the character is in lower case
                if 97 <= ord(l) <= 122:
                    i = (key1.index(l) + n) % 26
                    result += key1[i]

                # if the charater is in upper case
                elif 65 <= ord(l) <= 90:
                    i = (key2.index(l) + n) % 26
                    result += key2[i]
            except ValueError:
                result += l

        return result

    # decryption function for caesar cipher
    def decrypt(ciphertext, n):
        result = ''

        # visit each character in the ciphertext
        for l in ciphertext:
            try:
                # if the charater is in lower case
                if 97 <= ord(l) <= 122:
                    i = (key1.index(l) - n) % 26
                    result += key1[i]

                # if the character is in upper case
                elif 65 <= ord(l) <= 90:
                    i = (key2.index(l) - n) % 26
                    result += key2[i]
            except ValueError:
                result += l

        return result

    # function to generate key for vigenere cipher
    def generateKey(string, key):
        key = list(key)
        if len(string) == len(key):
            return (key)
        else:
            for i in range(len(string) - len(key)):
                key.append(key[i % len(key)])
        return "".join(key)

    # encryption function for vigenere encryption
    def cipherText(string, key):
        cipher_text = []
        for i in range(len(string)):
            x = (ord(string[i]) + ord(key[i])) % 26
            x += ord('A')
            cipher_text.append(chr(x))
        return "".join(cipher_text)

    # decryption function for vigenere decryption
    def originalText(cipher_text, key):
        orig_text = []
        for i in range(len(cipher_text)):
            x = (ord(cipher_text[i]) - ord(key[i]) + 26) % 26
            x += ord('A')
            orig_text.append(chr(x))
        return "".join(orig_text)


    BLOCK_SIZE = 16
    pad = lambda s: s + (BLOCK_SIZE - len(s) % BLOCK_SIZE) * chr(BLOCK_SIZE - len(s) % BLOCK_SIZE)
    unpad = lambda s: s[:-ord(s[len(s) - 1:])]

    while True:
        # print menu
        print("1.Caesar\n2.Viginere\n")

        # ask user to choose an option
        option = int(input("Enter your option: "))

        # if option is 1
        if option == 1:
            # print sub menu
            print("1.Encryption\n2.Decryption\n")

            # read user's option
            option = int(input("Enter your option: "))

            # if option is 1
            if option == 1:

                # read plain text
                plain = input("\nEnter Plain Text:\n")

                # read offset
                offset = int(input("\nEnter Key:\n"))

                # call encrypt() by passing plain, offset and print the string returned
                print("Cipher Text:", encrypt(plain, offset), "\n")

            # if option is 2
            elif option == 2:

                # read cipher text
                cipher = input("\nEnter Cipher Text:\n")

                # read offset
                offset = int(input("\nEnter Key:\n"))

                # call decrypt() by passing cipher, offset and print the string returned
                print("Plain Text:", decrypt(cipher, offset), "\n")

        elif option == 2:
            # print sub menu
            print("1.Encryption\n2.Decryption\n")

            # read user's option
            option = int(input("Enter your option: "))

            # if option is 1
            if option == 1:

                # read plain text
                plain = input("\nEnter Plain text:\n")

                # read keyword
                key = input("\nEnter Keyword:\n")

                # generate key
                keyword = generateKey(plain, key)

                # call ciphertext() by passing plain, keyword and print string returned
                print("Cipher Text:", cipherText(plain, keyword), "\n")

            # if option is 2
            elif option == 2:

                # read cipher text
                cipher = input("\nEnter Cipher Text:\n")

                # read keyword
                key = input("\nEnter Keyword:\n")

                # generate key
                keyword = generateKey(cipher, key)

                # call originalText() by passing cipher, keyword and print string returned
                print("Plain Text:", originalText(cipher, keyword), "\n")

        elif option == 3:
            # print sub menu
            print("1.Encryption\n2.Decryption\n")

            # read user's option
            option = int(input("Enter your option: "))

            # if option is 1
            if option == 1:
                # read plain text
                plain = input("\nEnter Plain Text:\n")

                # read encryption password
                password = input("\nEnter encryption password:\n")

        else:
            # print error message
            print("Please choose a valid option\n")

        # ask user want to continue
        option = input("Want to Continue? (y/n): ").lower()
        if option == "n":
            print()
            print("Thanks for using this program. GOODBYE!!...")
            break
        print("")
