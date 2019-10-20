public class chegg {
    public static void main(String args[]) {
        // The examples for the functions
        System.out.println(duplicate("Hello", "l"));
        System.out.println(duplicate("Hello", "e"));
        System.out.println(capFirstWord("hello. my name is dave. goodbye."));
        System.out.println(capFirstWord("hey. i'm great. i hope you are great too.  have a good day."));
    }

    public static String duplicate(String str, String aLetter) // for ex. Hello World and l --> Hellllo World
    {
        // The initial value of the result should be empty
        String dup = ""; // initialize a random return value
        for (int i = 0; i < str.length(); i++) // runs however many times letters there are in a the given String s
        {
            // equals to checks if the string is exactly equal to the letter mentioned
            if (aLetter.equals(str.substring(i, (i + 1)))) // if the letter = substring of s at i then...
            {
                // If so we add the letter twice to the resulting string
                dup = dup + str.charAt(i) + str.charAt(i); 
            } 
            else 
            {
                // We add it only once if the letter isnt the letter we are looking for
                dup = dup + str.charAt(i);
            }
        }
        return dup;
    }
    // This function converts the sentence to capitalized sentence
    public static String capFirstWord(String s)
    {
        // Stroe the result into the string variable result
        String result="";
        // The first letter will always need to be capitalised
        result=result + s.toUpperCase().charAt(0);
        // Then we check for all the other letters
        for(int i=1;i<s.length();++i)
        {
            // If we find a full stop '.' then it is confirmed that the sentence ended and then we have to capitalize the next word.
            if(s.charAt(i)=='.')
            {
                result=result+ '.';
                i++;
                // So we skip all the whitespaces and then capitalize the next word
                while((i<s.length()) && (s.charAt(i)==' '))
                {
                    i++;
                    result=result+" ";
                }
                if(i<s.length())
                {
                    result=result+s.toUpperCase().charAt(i);
                }
            }
            else
            {
                result=result + s.charAt(i);
            }
        }
        return result;
    }
}