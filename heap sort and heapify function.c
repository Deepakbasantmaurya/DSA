
#include <stdio.h>
void heapify(int arr[],int n,int i);
void heapsort(int arr[],int n)
{int i,temp;
for(i=(n/2)-1;i>=0;i--)
{heapify(arr,n,i);//build max heap
}
for(i=n-1;i>=0;i--)
{temp=arr[i];
arr[i]=arr[0];
arr[0]=temp;
//after swaping max heap property change  root so again we call heapify function
heapify(arr,i,0);
}
}
void heapify(int arr[],int n,int i)
{int largest=i;
int left=2*i+1;
int right=2*i+2,temp;
if(left<n&&arr[largest]<arr[left])
largest=left;
if(right<n&&arr[largest]<arr[right])
    largest=right;
if(largest!=i)
{temp=arr[largest];
arr[largest]=arr[i];
arr[i]=temp;
heapify(arr,n,largest);
}
}
void print(int arr[],int n)
{int i;
for(i=0;i<n;i++)
printf("%d ",arr[i]);
}
int main()
{int arr[]={1,65,7,8,22,7};
int l,n ,i,j;
n=sizeof(arr)/sizeof(arr[0]);
heapsort(arr,n);
print(arr,n);
}
