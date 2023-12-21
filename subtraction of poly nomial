#include<stdio.h>
#include<stdlib.h>
typedef struct node{int coeff;
int pow;
struct node*link;
}node;
struct node*addatend(node*temp,int coeff,int pow);
struct node*addof(node*head1,node*head2)
{struct node*head3=NULL;

while(head1!=NULL&&head2!=NULL)
{if(head1->pow==head2->pow)
{head3=addatend(head3,head1->coeff-head2->coeff,head1->pow);/*(head2->expo both are same)*/
head1=head1->link;
head2=head2->link;
}
else if(head1->pow>head2->pow)
{head3=addatend(head3,head1->coeff,head1->pow);
head1=head1->link;
}
else if(head1->pow<head2->pow)
{head3=addatend(head3,-1*head2->coeff,head2->pow);
head2=head2->link;
}
}
while(head1!=NULL)//that loop when head 2 have less node agar kam node hai head2 ke pass isake liye
{head3=addatend(head3,head1->coeff,head1->pow);
head1=head1->link;
}
while(head2!=NULL)//that loop when head 1 have less node agar kam node hai head 1ke pass isake liye
{head3=addatend(head3,-1*head2->coeff,head2->pow);
head2=head2->link;
}
return head3;

}
/*node*addatempty(node*head)
{node*newp=(node*)malloc(sizeof(node));int a,b;
printf("\n enter the coeff data\n");
scanf("%d",&a);
printf("enter the pow data\n");
scanf("%d",&b);
newp->coeff=a;
newp->pow=b;
newp->link=NULL;
return newp;
}*/
struct node*addatend(node*temp,int coeff,int pow)
{node*newp=(node*)malloc(sizeof(node));
newp->coeff=coeff;
newp->pow=pow;
newp->link=NULL;
if(temp==NULL||temp->pow<pow)
{newp->link=temp;
temp=newp;
}
else
{node*temp2=temp;
    while(temp2->link!=NULL&&temp2->link->pow>pow)
{temp2=temp2->link;
}
temp2->link=newp;
}
return temp;//taki jab ye return kare to temp jo ye head me jayega to ye first node ko point kare
}
void print(node*head)
{if(head==NULL)
{printf("empty");
}
else
{while(head!=NULL)
{printf("%dx^%d",head->coeff,head->pow);
head=head->link;
if(head!=NULL)//jab head=null hoga to printf execute n ho isliye
printf("+");
}
}
}
struct node*create()
{struct node*ptr,*head=NULL;
int i,k,f,e;
/*head=addatempty(head);*/
ptr=head;
printf("enter the equation size\n");
scanf("%d",&k);
for(i=1;i<=k;i++)
{printf("\nenter the coeff data\n");
scanf("%d",&e);
printf("\nenter the pow data\n");
scanf("%d",&f);
ptr=addatend(ptr,e,f);
}
head=ptr;
return head;
}
int main(){
struct node*head3=NULL,*head1=NULL;
struct node*head2=NULL;
printf("poly1");
head1=create();
printf("poly2");
head2=create();
printf("poly1\n");
print(head1);
printf("\npoly2\n");
print(head2);
head3=addof(head1,head2);
printf("\nresult\n");
print(head3);
}


