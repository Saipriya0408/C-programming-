#include<stdio.h>
#include<string.h>
int main()
{
     char line[150]="saveetha school of engineering";
     int vowels,consonant,digit,space,i;
     vowels=consonant=digit=space=0;
     for(i=0;line[i]!='\0';i++)
     {
     	if((line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'))
     	{
     	 vowels++;	
		}
		else if((line[i]>='a'&&line[i]<='z'))
		{
			consonant++;
		}
		else if((line[i]>='0'&&line[i]<='9'))
		{
			digit++;
		}
		else if((line[i]==' '))
		{
			space++;
		}
		printf("vowels=%d",vowels);
		printf("consonants=%d\n",consonant);
		printf("digits=%d\n",digit);
		printf("space=%d\n",space);
	 }
	 return 0;
}