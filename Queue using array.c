
#include<stdio.h>
#include<stdlib.h>
#define max 5
int  front=-1;
int raer=-1;
int queue[max];
void enque(int x)
{if(raer==max-1)
{printf("overflow");
}
else if (raer==-1&&front==-1)
{raer=front=0;
queue[raer]=x;
}
else 
{raer++;
queue[raer]=x;
}
}
void print()
{int i ;
for(i=front;i<raer+1;i++)
{printf("%d\n",queue[i]);
}
}
void deque()
{if(raer==-1&&front==-1)
{printf("underflow");
}
else
{printf(" deleted value is %d\n",queue[front]);
front++;//because que is follow the rule of fifo when we increment front ++ index first was skiped means first value are deleted 
queue[front];
}
}

int main()
{/*enque(6);
enque(8);
enque(3);
deque();
print();*/
int a;
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

