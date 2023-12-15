/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
void enque(int data);
 typedef struct node{
	int data;
	struct node*link;//we take the user defined pointer data type 
	
}node;
node*front=0;
node*raer=0;
void enque(int data)
{struct node* newnode=(struct node*)malloc(sizeof(node));
newnode->data=data;
newnode->link=0;
if(raer==0&&front==0)
{raer=front=newnode;
}
else
{
raer->link=newnode;
raer=newnode;
}
}
void  deque(){
	if(front==0&&raer==0)
	{printf("empty");
	}
	else 
	{node* temp=front;
	front=front->link;
	free(temp);
	}
	
}
void print()
{if(front==0&&raer==0)
{printf("queue is empty");
}
else
{node*temp=front;
while(temp!=0)
{printf("%d\n",temp->data);
temp=temp->link;
}
}
}

int main( void)
{int a;
while(1)
{printf("\n for enqueue press 1");
printf("\n for dequeue press 2");
printf("\n for print  press 3");
printf("\n for exite press 4");
printf("\n enter choice");
scanf("%d",&a);
switch(a){
case(1):
      printf("enter the data");
      scanf("%d",&a);
      enque(a);
      break;
case(2):
      deque();
      break;
case(3):
print();
break;
case(4):
      exit(1);
default:
 printf("invalid number");

}
}
}


