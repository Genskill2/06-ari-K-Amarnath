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

string ari(string s)
{
    srt_ret[] = {"Kindergarden", "First/Second Grade", "Third Grade", "Fourth Grade", "Fifth Grade", "Sixth Grade", "Seventh Grade", "Eighth Grade", "Ninth Grade", "Tenth Grade", "Eleventh Grade", "Twelfth Grade", "College Student", "Professor"};
    
    for (int i = 0; i < 14; i++)
    {
        if (i == rb_index(s))
        {
            return srt_ret[i - 1];
        }
    }
}
