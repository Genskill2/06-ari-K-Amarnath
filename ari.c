#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

string ari(string s)
{
    string Grade;
    float ltr = 0, wrd = 0, snt = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if(isalnum(s[i]))
        {
            ltr++;
        }
        else if (s[i] == ' ')
        {
            wrd++;
        }
        else if (s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            snt++;
        }
    }
    int rb_index = ceil(4.71 * (ltr/wrd) + 0.5 * (wrd/snt) - 21.43);

    string str_ret[] = {"KinderKindergarten","First/Second Grade","Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade","Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor"} ;
	
    for (int i = 1; i <= 14; i++)
    {
        if (i == rb_index)
        {
            Grade = str_ret[i];
        }
    }
    return Grade;
}
