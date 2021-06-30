#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

float ltr(string s)
{
    int k = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if(isalnum(s[i]))
        {
            k++;
        }
    }
    return k;    
}

float wrd(string s)
{
    int k = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            k++;
        }
    }
    return k;
}

float snt(string s)
{
    int k = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            k++;
        }
    }
    return k;    
}

int rb_index(string s)
{
    int Grade = ceil(4.71 * (ltr(s)/wrd(s)) + 0.5 * (wrd(s)/snt(s)) - 21.43);
    return Grade;
}

int main(void)
{
    string s = get_string("Sentence: ");
    switch(rb_index(s))
    {
        case 1:
            printf("Kindergarden\n");
            break;
        case 2:
            printf("First/Second Grade\n");
            break;
        case 3:
            printf("Third Grade\n");
            break;
        case 4:
            printf("Fourth Grade\n");
            break;
        case 5:
            printf("Fifth Grade\n");
            break;
        case 6:
            printf("Sixth Grade\n");
            break;
        case 7:
            printf("Seventh Grade\n");
            break;
        case 8:
            printf("Eighth Grade\n");
            break;
        case 9:
            printf("Ninth Grade\n");
            break;
        case 10:
            printf("Tenth Grade\n");
            break;
        case 11:
            printf("Eleventh\n");
            break;
        case 12:
            printf("Twelfth Grade\n");
            break;
        case 13:
            printf("College Student\n");
            break;
        case 14:
            printf("Professor\n");
            break;
    }
}
