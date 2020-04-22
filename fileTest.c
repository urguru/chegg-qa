//This function contains the function definitions
#include "fileTest.h"
int countString(const char* fileName, char *str){

    int word_count = 0;
    FILE *fptr = fopen(fileName, "r");
    // insert your code here!
    char line[1000];
    char *pos;

    int index;


    // Read line from file till end of file.
    while ((fgets(line, 1000, fptr)) != NULL)
    {
        index = 0;

        // Find next occurrence of word in line
        while ((pos = strstr(line + index, str)) != NULL)
        {
            index = (pos - line) + 1;

            word_count++;
        }
    }
    return word_count;
}

int countEmptyLines(const char *fileName){

    int emptyLine = 0;
    char str[1000];
    // Insert your code here!
    FILE *fptr = fopen(fileName, "r");
    while((fgets(str,1000,fptr))!=NULL)
    {
        if(str[0]=='\n')
            emptyLine++;
    }
    return emptyLine;
}
