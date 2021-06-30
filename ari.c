
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <math.h>

string ari(string s)
{
	int character = 0, word = 0, sentence = 0;
 	
 	for(int i = 0; s[i] != '\0'; i++)
 	{
 		if(isalnum((int)s[i])) 
 			character += 1;
	    else if(s[i]==' ')
	    	word += 1;
	    else if(s[i]=='.'||s[i]=='?'||s[i]=='!')
	    	sentence += 1;
	 }
	
	 
	int ari = ceil(4.71*((float)character/word) + 0.5*((float)word/sentence) - 21.43);
	
	switch(ari)
	{
		case 1 : return "Kindergarten";
		case 2 : return "First/Second Grade";
		case 3 : return "Third Grade";
	 	case 4 : return "Fourth Grade";
	 	case 5 : return "Fifth Grade";
 		case 6 : return "Sixth Grade";
	 	case 7 : return "Seventh Grade";
	 	case 8 : return "Eighth Grade";
	 	case 9 : return"Ninth Grade";
	    	case 10 : return "Tenth Grade";
	    	case 11 : return "Eleventh Grade";
		case 12 : return "Twelfth grade";
		case 13 : return "College student";
		case 14 : return "Professor";
	}
}
