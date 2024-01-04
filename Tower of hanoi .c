#include <stdio.h>
#include<math.h>
void ToH(int n,char beg,char aux,char end)
{if(n>=1)
{ToH(n-1,beg,end,aux);
printf("\n%c move to ->%c\n",beg,end);
ToH(n-1,aux,beg,end);
}
}
int main()
{char a='a',b='b',c='c';
int n;
printf("enter the disk number ");
scanf("%d",&n);
int movedisk=(pow(2,n)-1);
printf(" how many move are required %d",movedisk);

    ToH(n,a,b,c);
}
