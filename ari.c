#include<stdio.h>
#include<string.h>
#include<cs50.h>
#include<ctype.h>
#include<math.h>

string ari(string s)
{
	int ltr = 0, wrd = 0, snt=0;
	string grade;

	for(int i = 0; i < strlen(s); i++)
	{
	  if (isalnum(s[i]))
	    ltr++;
	  
	  if(s[i]==' ')
	    wrd++;
	  
	  if(s[i]=='!'||s[i]=='?'||s[i]=='.')
	    snt++;
	}
	
	float ari_val = 4.71 * (ltr/wrd) + 0.5 * (wrd/snt) - 21.43;

	int rb_index = ceil(ari_value);
	
	string str_ret[] = {"KinderKindergarten","First/Second Grade","Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade","Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor"} ;
	
	for(int i = 1; i <= 14; i++)
	{
	    if(rb_index == i)
	    {
	        Grade = srt_ret[i-1];
	    }
    }
	return grade;
}
