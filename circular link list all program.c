
#include<stdio.h>
#include<stdlib.h>
typedef struct node{int data;
struct node*link;
}node;
struct node*addatempty(int data)
{struct node*temp=(node*)malloc(sizeof(node));
temp->data=data;
temp->link=temp;
return temp;
}
struct node*addatbeg(struct node*tail,int data)
{struct node*newp=(node*)malloc(sizeof(node));
newp->data=data;
newp->link=NULL;
if(tail==NULL)
{newp->link=newp;
tail=newp;
}
else{
	newp->link=tail->link;
	tail->link=newp;
}
return tail;
}
struct node*addatend(struct node*tail,int data)
{struct node*newp=(node*)malloc(sizeof(node));
newp->data=data;
newp->link=NULL;
if(tail==NULL)
{newp->link=newp;
tail=newp;
}
else{
	newp->link=tail->link;
	tail->link=newp;
	tail=tail->link;
}
return tail;
}
struct node*addatpos(struct node*tail,int data)
{printf("enter the pos which pos data you want to insert");int pos;
scanf("%d",&pos);
struct node*newp=(node*)malloc(sizeof(node));
newp->data=data;
struct node*p=tail->link;
while(pos>2)
{p=p->link;
pos--;
}
if(pos==1)
{tail=addatbeg(tail,data);
}
else if(p==tail)
{tail=addatend(tail,data);
}
else
{newp->link=p->link;
p->link=newp;
}
return tail;
}
void print(struct node*tail)
{node*p=tail->link;
do{printf("%d\n",p->data);
p=p->link;
}while(tail->link!=p);
}
int main()
{struct node*tail=NULL;
tail=addatempty(89);
tail=addatbeg(tail,1);
tail=addatend(tail,8);
tail=addatpos(tail,9);
print(tail);
}
