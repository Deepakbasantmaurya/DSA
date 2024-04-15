#include<stdio.h>
#include<string.h>
int main()
{char str[18];int i;
 scanf("%[^\n]s",str);
 for(i=0;i<5;i++)
 {if(str[i]==90||str[i]==122)
 {str[i]=str[i]-25;
 //printf("%c",str[i]);
 }
 else
 {str[i]=str[i]+1;
 //printf("%c",str[i]);
 }
 }
 printf("that is encripted data\n %s",str);
}
