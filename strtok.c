#include <stdio.h>
#include <string.h>

void m_strtok(char *str1, char *str2);

int main(void)
{
	char s1[10]="yulim\n";
	printf("yulim\n");
	printf("write");
	char s2[10];
	scanf("%s", s2);

	m_strtok(s1, s2);
}

void m_strtok(char *str1, char *str2)
{
	
	 while(*str1 !='\0')
	   { 
		for(int i=0; i<10; i++)
		{ 
		      	if(str1[i] != str2[i])
		{
			printf("%c", str1[i]);
		}

		else
		{
			printf("\n");
          	}
	
	   }
	}
}	
