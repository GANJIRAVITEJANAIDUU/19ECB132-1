#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], ch;
  	int i;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	printf("\n Please Enter the Character that you want to Search for :  ");
  	scanf("%c", &ch);
  	
  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)  
		{
  			printf("\n '%c' is Found at Position %d ", ch, i + 1);
 		}
	}
	
  	return 0;
}
/*output
Please Enter any String :  javapoint

 Please Enter the Character that you want to Search for :  a

 'a' is Found at Position 2 
 'a' is Found at Position 4 
/*output
  Enter the value 4
10/n
  */
