#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

int ltr(string s)
{
    int k = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if(isalpha(s[i]))
        {
            k++;
        }
    }
    return k;    
}

int wrd(string s)
{
    int k = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            k++;
        }
    }
    return k+1;
}

int snt(string s)
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
    float L = (ltr(s)/wrd(s)) * 100;
    float S = (snt(s)/wrd(s)) * 100;
    int Grade = round(.0588*L - 14.28*S - 15.8);
    return Grade;
}

int main(void)
{
    string s = get_string("Sentence: ");
    printf("The given string has %i letter(s) %i word(s) %i sentence(s)\n", ltr(s), wrd(s), snt(s));
    printf("Grade: %i\n", rb_index(s));
}
