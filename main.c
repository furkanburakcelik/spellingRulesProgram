#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRINGSIZE 2000

// this function reads everything from the user
// until s/he enters CTRL + Z.
void readUntilEOF(char str[]);

int main()
{   // userStr: the string you read from the user
    // outputStr: the string to print out
    char userStr[STRINGSIZE],
         outputStr[STRINGSIZE];

    // your line to read from the
    // keyboard... DO NOT CHANCE IT
    readUntilEOF(userStr);
    // start your code here
    // you are, of course, free to use
    // as many functions as you can



    // your line to print out the screen
    // DO NOT CHANGE IT. IT WILL BE PROBABLY
    // YOU LAST LINE BEFORE return 0
    fprintf(stdout, outputStr);
    return 0;
}

void readUntilEOF(char str[])
{
    char ch;
    int i = 0;
    ch = getchar();//read the next char
    while(ch!=EOF)
    {
        // check whether the number
        // of chars we read is still
        // less than SIZEOFSTRING
        // if so, add it to our string
        // otherwise just discard until
        // the user presses EOF
        // FOR EOF: PRESS "ENTER CTRL + Z ENTER"
        if (i < STRINGSIZE -1)
        {
            str[i] = ch;
            i++;
        }
        ch = getchar();
    }
    str[i] = '\0';
}
