//array prgram  traversal and insertion and deletion and linear search
#include<stdio.h>
void traversal (int a[],int size )//void travers (int *a,int size)
{int i,j;
for(i=0;i<size;i++)
{printf("travers=%d\n",a[i]);
printf("traverash=%d\n",*(a+i));
}	
}
void insertion(int a[],int size,int pos,int data)
{int i,j;
for(i=size-1;i>=pos-1;i--)
{a[i+1]=a[i];
}
a[pos-1]=data;
size++;
for(i=0;i<size;i++)
{printf("travers=%d",a[i]);
}
}
void deletion(int a[],int pos,int size)
{int i,j;
for(i=pos-1;i<=size-1;i++)
{a[i]=a[i+1];
}
size--;
for(i=0;i<size;i++)
{printf("travers=%d",a[i]);
}
}
void search(int a[],int element,int size)
{int i,k=0;
for(i=0;i<size;i++)
{if(a[i]==element)
{printf("found at =%d,array element=%d",i+1,a[i]);
k++;
}
}
if(k=0)
printf("not found");
} void  sort(int arr[],int size)
{int i,j,temp;
for(i=1;i<=size-1;i++)
{for(j=0;j<=size-i-1;j++)
if(arr[j]>arr[j+1])
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
for(i=0;i<size;i++)
{printf("\nsorted arr is    %d\n",arr[i]);
}

}
int max(int *a,int n){
	int i,j,max;
	max=a[0];
	for(i=0;i<n;i++)
{	if(max<a[i])
	max=a[i];
}
return max;
}
int min(int *a,int n){
	int i,j,min;
	min=a[0];
	for(i=0;i<n;i++)
{	if(min>a[i])
	min=a[i];
}
return min;
}

void main ()
{int a[100];
int i,j,b,element,data;
printf("enetr the size of array:");
scanf("%d",&j);
printf("enter the element of arrray");
for (i=0;i<j;i++) 
{scanf("%d",&a[i]);
}
while(1){printf("\n");
printf("enter your program what you want to do ");
printf("for travershal enter 1");
printf("for insertion press 2\n");
printf("for deletion press 3\n ");
printf("for searching press 4\n");
printf("for maximum term in array pess 5\n");
printf("for minimum  term press 6\n");
printf("for buble short  array press 7\n");
printf("for quit the program 8\n");
printf("\nenter your choice\n")	;
scanf("%d",&b);
switch(b){

case(1): {
traversal (a, j );
	break;
}
case (2) :{int pos;
printf("enter posistion");
scanf("%d",&pos);
printf("data");
scanf("%d",&data);
insertion(a,j, pos,data);
	break;
}
case (3) :{printf("enter posistion");int pos;
scanf("%d",&pos);
deletion(a,pos ,j);
	break;
}
case  (4):{printf("enter element");
scanf("%d",&element);
 search(&a[0],element,j);
	break;
}
case(5):printf("max term =%d",max(a,j));
break;
	
case(6):printf("min term =%d",min(a,j));
break;
	
case(7):
	sort(a,j);
	break;

case(8):
     exit(1);
	
default:printf("invalid");
	}
}
}
