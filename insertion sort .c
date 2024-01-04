#include <stdio.h>
#include<stdlib.h>
void insertionsort(int *arr,int n)
{int temp,i,j;
for(i=0;i<n;i++)
{temp=arr[i];
j=i-1;
while(j>=0&&temp<=arr[j])
{arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=temp;
}
}
void print(int arr[],int n)
{int i;
for(i=0;i<n;i++)
printf(" sorted %d\n",((*arr)+i));
}
int main()
{int *arr,n;
printf("enter the size of array ");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
int i;
printf("enter the element in array\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
insertionsort(arr,n);
print(arr,n);
return 0;
}
