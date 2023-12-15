#include<stdio.h>
#include<stdlib.h>
int main()
{int arr[10],i;
//hum pointer ki madad se   heap taiyar kar kar index -1 ya -2 kahi se bhi chala sakte h par  array subscrip me nahi hota isaka index 
//c programing me 0zero se start hota h ;
for(i=0;i<=9;i++)
{scanf("%d",&arr[i]);
}
for(i=0;i<=9;i++)
{printf("%d\n",arr[i]);
}
}
