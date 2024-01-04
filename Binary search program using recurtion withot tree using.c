#include <stdio.h>
int binarysearch(int arr[],int key,int n,int low,int high)
{if(low<=high)
{int mid=(low+high)/2;
if(arr[mid]==key){
printf("%dat  valu%d",mid+1 ,arr[mid]);
return (mid+1);}
else if(arr[mid]>key)
return (arr,key,n,low,mid-1);
else
return(arr,key,n,mid+1,high);

}
return -1;
    
}
int main()
{
  int arr[]={1,2,46,7,9};
int n=sizeof(arr)/sizeof(arr[0]);
int key=46;
int m=binarysearch(arr,key,n,0,n-1);
( m==-1)?printf("not found"):printf("\nfound at %d",m);
}
