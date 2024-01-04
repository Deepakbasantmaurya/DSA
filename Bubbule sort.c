#include <stdio.h>
#include<stdlib.h>
int main()
{int arr[]={2,4,3,6,5,7};
int n=sizeof(arr)/sizeof(arr[2]);int i,j;
for(i=0;i<n-1;i++)
{for( j=0;j<n-1-i;j++)
{if(arr[j]>arr[j+1])
{int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for(i=0;i<n;i++)
{printf("%d",arr[i]);
}
}
