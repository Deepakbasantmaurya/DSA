#include <stdio.h>
#include<stdlib.h>
void selectionsort(int *arr,int n)
{int temp,i,j,min;
for(i=0;i<n;i++)
{min=i;
for(j=i+1;j<n;j++)
{if(arr[j]<arr[min])
{min=j;
}
}
if(min!=i)
{temp=arr[i];
arr[i]=arr[min];
arr[min]=temp;
}
}
}
void print(int arr[],int n)
{int i;
for(i=0;i<n;i++)
printf(" sorted %d\n",arr[i]);
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
selectionsort(arr,n);
print(arr,n);
return 0;
}


