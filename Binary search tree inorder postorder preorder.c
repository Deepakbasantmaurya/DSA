
#include <stdio.h>
#include<stdlib.h>
struct BSTnode{int data;
struct BSTnode*left,*right;
};
struct BSTnode*newnode(int data)
{struct BSTnode*t=(struct BSTnode*)malloc(sizeof(struct BSTnode));
t->data=data;
t->left=NULL;
 t->right=NULL;
return t;
}
struct BSTnode*creat(struct BSTnode*head,int data)
{if(head==NULL)
{head=newnode(data);
return head;
}
else if(data<=head->data)
{head->left=creat(head->left,data);
}
else//for if data>=head->data
{head->right=creat(head->right,data);
}
return head;//hum yaha updated head ko return kara rahe hai kyoki ye head local variable hai

}

void print(struct BSTnode*node)
{if(node==NULL)
return;
print(node->left);
printf("%d->",node->data);
print(node->right);
	
	}
void postprint(struct BSTnode*node)
{if(node==NULL)
return;
printf("%d->",node->data);
postprint(node->left);
postprint(node->right);
	
	}
	void preprint(struct BSTnode*node)
{if(node==NULL)
return;
preprint(node->left);
preprint(node->right);
printf("%d->",node->data);
	
	}


int main()
{struct BSTnode*head=NULL;
printf("enter the tree how much you want sub tree");
int i ,a,data;
scanf("%d",&a);
for(i=1;i<=a;i++)
{printf("\nenter the data\n");
scanf("%d",&data);
    head=creat(head,data);
}
printf("in order\n");
print(head);
printf("\npost order\n");
postprint(head);
printf("\npreorder\n");
preprint(head);
}



