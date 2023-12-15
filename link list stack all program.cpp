#include<stdio.h>
#include<stdlib.h>
typedef struct node{int data;
struct node*link;//yaha hum typedef ki madad se short nhi karega 
}node; int value;
node*top=NULL;
void push(int data)
{node* temp=(node*)calloc(1,sizeof(node));//calloc is void type pointer its return the address of created heap;
temp->data=data;
temp->link=top;//yaha bar bar pahala data niche jayega 
top=temp;
}
void print()
{node*tip=top;
while(tip!=NULL)
{printf("%d\n",tip->data);
 tip =tip->link;
}
}
int pop()//return type is int
{if(top==NULL)
{printf("underflow");
exit(1);}
    //that program is stack so its works on lifo 
//when we push the element fist elent goes to last in stack  top  pointing at first node; so we use mehod of delet at first but some modification;
/*node*temp=top->link;//ya top=top->link;
free(top);//thhis step no need when aplly top->=link
top=temp1;*/
node*temp1=top;
value=top->data;
top=top->link;
 
free(temp1);
return value;
 
}
int main()
{int i,choice,data;
 while(1)
 {printf("\n");
 printf("1. push\n");
 printf("2.pop\n");
 printf("3.for top value\n");
 printf("4.print \n");
 printf("5.quit operation\n");
printf("enter choice\n");
scanf("%d",&choice);
switch(choice){
	case(1):
		printf("enter the data\n");
		scanf("%d",&data);
		push(data);
		break;
	case(2):
		printf("for pop ing value delete value\n");
		printf("%d\n",value);
		break;
	case(3):	printf("for pop\n");
	pop();
			print();
		break;
	case(4):
			printf("for printing\n");
		print();
		break;
	case(5):
			printf("for quit\n");
		exit(1);
	default:
			printf("entered value is wrong\n");
		
		
}
}
}
