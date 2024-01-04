
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
 int stack_arr[MAX];
 int top=-1;
 int value;
 void push(int);
 void print();
 int pop();
 int main(void)
 {int i,choice,data;
 while(1)
 {printf("\n");
 printf("1. push\n");
 printf("3.pop\n");
 printf("2.for top value\n");
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
	value=pop();
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
 
 }int isempty()
 {if (top==-1)
 return 1;
 else  
 return 0;
 }
 int isfull()
 {if(top==MAX-1)
 return 1 ;
 else 
 return 0;
  } 
 void push(int data)
 {if(isfull()){
 printf("overflow");
 return;
}
top=top+1;
stack_arr[top]=data;
 }
void print()
{if(isempty()){
printf("over flow");
exit(1);
//retun;//for  ki age bhi kam kiya jaye
}
	int i;
	for(i=top;i>=0;i--){
	printf("%d\n",stack_arr[i]);
}
printf("\n");
}
int pop()
{if(isempty())
{printf("under flow");
exit(1);
}
 value=stack_arr[top];
top=top-1;
return value;
}

