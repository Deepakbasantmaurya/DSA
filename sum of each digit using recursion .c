
#include <stdio.h>
int sumofdigit(int n)
{if(n<10)
return n;
else
return(n%10+sumofdigit(n/10));}
int main()
{int n;
printf("enter the digit");
scanf("%d",&n);
printf("%d",sumofdigit(n));
    return 0;
}

