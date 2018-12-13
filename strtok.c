#include <stdio.h>
#include <string.h>

void m_strtok(char *str1, char *str2);

int main(void)
{
	char s1[10]="yulim\n"; // 문장 선언
	printf("yulim\n");
	printf("write"); 
	char s2[10];
	scanf("%s", s2);  // 자를 문자 입력받기

	m_strtok(s1, s2);
}

void m_strtok(char *str1, char *str2)
{
	
	 while(*str1 !='\0')     //*str1이 null이 아닐때 수행
	   { 
		for(int i=0; i<10; i++) 
		{ 
		      	if(str1[i] != str2[i])  //str1의 i번째가 str2의 i번째와 같지 않으면
 		{
			printf("%c", str1[i]);  // str1의 i번째 문자 출력
		}

		else
		{
			printf("\n"); // 같으면 공백 출력
          	}
	
	   }
	}
}	
      
//이렇게 했는데 무한루프를 돌아요......
