#include<stdio.h>
#include <string.h>

int main()
{
    char s[50000];
    int i;
    int vowel=0;
    int consonant=0;

    printf("Enter  the string : ");
    scanf("%s",s);

    for(i=0;s[i];i++)
    {
    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
    	{

            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		      vowel++;
            else
             consonant++;
        }

 	}


    printf("vowel: %d\n",vowel);
    printf("consonant:%d\n",consonant);

    return 0;
}

