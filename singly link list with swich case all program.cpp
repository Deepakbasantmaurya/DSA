#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node{int data;
struct node* link;//we take the variable user_defind data type data because its contain(point) the two part 1is data {int float,char depend you}2nd is adressof next node;;
};
void deletatvalue(struct node*head,int value)
{struct node*ptr=head;
while(ptr->data!=value)
{head=ptr;
ptr=ptr->link;
}
head->link=ptr->link;
free(ptr);
}
void ad_at_pos(struct node *ptr,int data,int pos){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	--pos;
		while(pos!=1)
		{ptr=ptr->link;
		pos--;
		}
		temp->link=ptr->link;
		ptr->link=temp;
}
struct node* ad_at_end(struct node *ptr,int data)
{struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->link=NULL;
while(ptr->link!=NULL){ptr=ptr->link;
}// yaha hu chahe to use kar sakte hai or nahi bhi loop isliye nahi lagaya gaya hai ki tim coplexicity badh jati h
ptr->link=temp;//yaha par  hume node ka end pata hai thats reson we can not use loop;

return temp;

} 
struct node *ad_at_first(struct node*ptr,int info)
{struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->data=info;
temp->link=ptr;
ptr=temp;//for making a first node
return ptr;
}void valu(struct node*ptr,int pos)//here we not use pos-- before while because we free the ptr->link not ptr
{struct node*temp=ptr;int t=pos;
while(pos!=1)
{
ptr=ptr->link;
pos--;
}
printf(" vale at %dis=%d\n",t,ptr->data);}
struct node*deletallnode(struct node*ptr)
{struct node*temp;
temp=ptr;
while(ptr!=NULL)
{temp=ptr;
ptr=ptr->link;
free(temp);

}
if (ptr==NULL)
printf("empty node");
return ptr;
}

void search(struct node*ptr,int element)
{int pos=1,count=0;
while(ptr!=NULL)
{
pos++;
if(ptr->data==element){
	printf("found at %dis:%d",pos,ptr->data);
count++;
}ptr=ptr->link;
}
if(count==0)
printf("not found");

}
void travers(struct node*str){
if(str==NULL)
printf(" node empty");
	struct node*ptr=str;
	while(ptr!=NULL)
	{printf("traverse is:%d\n",ptr->data);
	ptr=ptr->link;
	}
}
struct node* delatfirst(struct node*str)
{struct node*temp=str;
str=str->link;
free(temp);
return str;
}
struct node*deteteatlast(struct node*ptr)
{while(ptr->link->link!=NULL)
{ptr=ptr->link;
}
free(ptr->link);
ptr->link=NULL;//tere are no need of return type
}

void deletatpos(struct node*ptr,int pos)//here we not use pos-- before while because we free the ptr->link not ptr
{struct node*temp=ptr;
pos--;
while(pos!=NULL)
{temp=ptr;
ptr=ptr->link;
pos--;
}
temp->link=ptr->link;
free(ptr);
ptr=NULL;
}
int main(){struct node*head=(struct node*)malloc(sizeof(struct node));
printf("enter the data of first node\n");int n,i,l,data,choice;
scanf("%d",&n);
head->data=n;
head->link=NULL;
printf("enter the node  number size\n");
scanf("%d",&l);
struct node*ptr=head;
for(i=1;i<=l;i++)
{printf("entr the data in the %d node call\n ",i+1);
scanf("%d",&data);
ptr=ad_at_end(ptr,data);
}ptr=head;
travers (ptr);

while(1)
{printf("\n");
printf("1. isertion at end\n"); 
printf("2. find value  at pos\n");
printf("11. isertion at pos\n"); 
printf("3. isertion at first\n");
printf("4.deletion at first node \n");
printf("5.deletion at lst node \n");
printf(" 6.deletion at pos enter the pos \n");
printf("7.all nodes are deleted fun \n");
printf("9.quit for the program\n");
printf("8. search element\n");
printf("10.enter value of deletion\n");
printf("ener yor choice\n");
scanf("%d",&choice);
switch(choice){

case(1):
	ptr=head;
printf("entr the data in the %d node call\n ",i+1);
scanf("%d",&data);
ptr=ad_at_end(ptr,data);
travers (head);//head dala hu taki ptr me las value hogi
break;
case(2):
	ptr=head;
int pos;
 printf("enter node pos for whose data  you want\n");
scanf("%d",&pos);
valu(ptr, pos);
travers (head);//yaha ptr dal sakte head ki jagah par the kyuki yaha value return nhi ho rahi h
break;
case(3):
	ptr=head;
 printf("enter node   data for insertion at first  you \n");int info;
scanf("%d",&info);
ptr=ad_at_first(ptr,info);
travers (ptr);
break;
case(4):printf("deletion at first node \n");
head=delatfirst(ptr);
ptr=head;
travers (ptr);
break;
case(5):printf("deletion at last node \n");
deteteatlast(head);
travers (head);
break;
case(6):
printf(" deletion at pos enter the pos \n");int k;
scanf("%d",&k);
  deletatpos(head,k);
 travers (head);
 break;
 case(7):printf("all nodes are deleted \n");
 ptr=deletallnode(head);
 travers (ptr);
 break;
 case(8):
 		ptr=head;
 		printf("enter the search element\n");int element;
 		scanf("%d",&element);
 		search(ptr, element);
 		break;
 	case(10):
 		printf("enter value of deletion");int value;
 		scanf("%d",&value);
 		deletatvalue(head, value);
 		 travers (head);
 		break;
 case(9):
 	exit(1);
 	break;
 	case(11):
 		printf("enter the pos ");
 		scanf("%d",&pos);
 			printf("enter the data ");
 		scanf("%d",&data);
 		
 		ad_at_pos(ptr,data,pos);
 travers (head);
break;
 default:printf("not found number id wrong your list is");
 travers (head);
}
}
}
