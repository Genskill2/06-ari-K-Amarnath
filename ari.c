#include<stdio.h>
#include<string.h>
#include<cs50.h>
#include<ctype.h>
#include<math.h>

string ari(string s)
{
	int len, num_word=0, num_char=0, num_sent=0;
	string grade;
	len = strlen(s);
	(int i = 0; i < len; i++) 
	{
	  if(isalnum(s[i]))
	    num_char++;
	  
	  if(s[i]==' ')
	    num_word++;
	  
	  if(s[i]=='!'||s[i]=='?'||s[i]=='.')
	    num_sent++;
	}
	
	float ari_value = 4.71*num_char/num_word+0.5*num_word/num_sent-21.43;
	
	int r=round(ari_value);
	if(r<ari_value)
	  r++;
	
	string grade_level[] = {"KinderKindergarten","First/Second Grade","Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade","Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor"} ;
	
	for(int i = 1; i <= 14; i++)
	{
	    if(r==i)
	        grade = grade_level[i-1];
	}
	return grade;
}
