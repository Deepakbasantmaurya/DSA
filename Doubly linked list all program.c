
#include <stdio.h>
#include <stdlib.h>
struct node{struct node*pre;
int data;
struct node*link;
};
void max(struct node*temp)
{int max=temp->data;
while(temp!=NULL)
{temp=temp->link;
if(max<temp->data)
{max=temp->data;
}
}
printf("max %d",max);
}
void deletpos(struct node*head,int pos)
 {
struct node *ptr=head;
while(pos!=1)
{ptr=ptr->link;
pos--;
}ptr->pre->link=ptr->link;
ptr->link->pre=ptr->pre;
free(ptr);
}
struct node*deleteatlast(struct node*temp)
{struct node*temp1;while(temp->link->link!=NULL)
{temp=temp->link;
}temp1=temp->link;
temp->link=NULL;
free(temp1);
}

struct node*deletatbeg(struct node*temp)
{struct node*temp1=temp;
temp=temp->link;
temp->pre=NULL;
free(temp1);
return temp;
}
void display(struct node*ptr)
{struct node*ptr1=ptr;
    while(ptr!=NULL)
{printf("%d \n",ptr->data);
ptr=ptr->link;
}
printf("reverse of list \n");
while(ptr1->link!=NULL)
{
ptr1=ptr1->link;
}
ptr=ptr1;while(ptr!=NULL)
{printf("%d \n",ptr->data);
ptr=ptr->pre;
}
}
struct node*at_the_end(struct node*head,int data)
{struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->pre=NULL;
temp->data=data;
temp->link=NULL;
struct node *ptr=head;
while(ptr->link!=NULL){
	ptr=ptr->link;
}
ptr->link=temp;
temp->pre=ptr;
return head;
}
struct node*adatbeg(struct node*temp)
{struct node*newp=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newp->data);
newp->link=temp;
temp->pre=newp;
newp->pre=NULL;
return newp;
}

 struct node*at_the_pos(struct node*head,int pos,int data)
 {struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->pre=NULL;
temp->data=data;
temp->link=NULL;
struct node *ptr=head;
pos--;
while(pos!=1)
{ptr=ptr->link;
pos--;
}
temp->link=ptr->link;
ptr->link->pre=temp;
ptr->link=temp;
temp->pre=ptr;
return head;
 }
int main()
{struct node*head=(struct node*)malloc(sizeof(struct node));
head->pre=NULL;
head->data=45;
head->link=NULL;
printf("enter the node number ");
int i,n,j;
scanf("%d",&n);
struct node*ptr=head;
for(i=2;i<=n;i++)
{printf("enter the data in%d node",i);
scanf("%d",&j);
ptr=at_the_end(ptr,j);
}ptr=head;
while(ptr!=NULL)
{printf("%d\n",ptr->data);
ptr=ptr->link;
}
ptr=head;
printf("enter the data for insertion");int data,pos;
scanf("%d",&data);
printf("enter the   position ");
scanf("%d",&pos);
ptr=at_the_pos(ptr,pos,data);
while(ptr!=NULL)
{printf("%d\n",ptr->data);
ptr=ptr->link;
}
ptr=head;
printf("at ad first");
head=adatbeg(head);struct node*ptr1;
ptr=ptr1=head;
while(ptr!=NULL)
{printf("%d \n",ptr->data);
ptr=ptr->link;
}
printf("reverse of list \n");
while(ptr1->link!=NULL)
{
ptr1=ptr1->link;
}
ptr=ptr1;while(ptr!=NULL)
{printf("%d \n",ptr->data);
ptr=ptr->pre;
}


printf("\ndelet at beg\n");
head=deletatbeg(head);
display(head);
printf("delete at last");
deleteatlast(head);
display(head);
printf("enter the pos ");
scanf("%d",&pos);
deletpos(head,pos);
display(head);
max(head);

}







