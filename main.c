/*
 * This program was made to return the most repeated character in a string
 *
 * Mario Emilio Aguilar Chung
 * A01411210@itesm.mx
 * 10/18/2018
 *
 */
#include <stdio.h>
#include <string.h>

//The function that will return the most repeated character
char Mode(char str[])
{
    char mode = str[0];
    int count = 0;
    int count2;
//We read the string
    for (int i = 0; i < strlen(str); i++)
    {
        count2 = 0;
        for (int j = i+1; j < strlen(str); j++)
        {
            //If the character is identical to the character before it and it is not a space, the counter increases
            if ((str[i] == str[j]) && (str[i] != ' '))
            {
                count2++;
            }
        }
        //The amount of times a character is repeated will be stored in count, and the character is saved
        //in mode. If the next character ends up having a bigger count2, then the character is replaced
        if (count2 > count)
        {
            count = count2;
            mode = str[i];
        }
    }
    return mode;
}

int main(void) {
    char str[1000];
//Getting the string from the user
    printf("Give me a series of characters:\n");
    fgets (str, sizeof(str), stdin);
    
//Printing the results
    printf ("The most repeated character is %c", Mode(str));
    return 0;
}